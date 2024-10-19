#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>
#include <errno.h>

int main() {
    int serial_port = open("/dev/cu.usbmodem11101", O_RDWR);

    if (serial_port < 0) {
        printf("Error %i from open: %s\n", errno, strerror(errno));
        return 1;
    }

    // Configure serial port
    struct termios tty;

    if(tcgetattr(serial_port, &tty) != 0) {
        printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
        return 1;
    }

    tty.c_cflag &= ~PARENB; // No parity bit
    tty.c_cflag &= ~CSTOPB; // Only one stop bit
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |= CS8;     // 8 bits per byte
    tty.c_cflag &= ~CRTSCTS;// Disable RTS/CTS hardware flow control
    tty.c_cflag |= CREAD | CLOCAL; // Turn on READ & ignore ctrl lines

    tty.c_lflag &= ~ICANON;
    tty.c_lflag &= ~ECHO; // Disable echo
    tty.c_lflag &= ~ECHOE;// Disable erasure
    tty.c_lflag &= ~ECHONL;// Disable new-line echo
    tty.c_lflag &= ~ISIG; // Disable interpretation of INTR, QUIT and SUSP

    tty.c_iflag &= ~(IXON | IXOFF | IXANY); // Turn off s/w flow ctrl

    tty.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL);

    tty.c_oflag &= ~OPOST; // Prevent special interpretation of output bytes
    tty.c_oflag &= ~ONLCR; // Prevent conversion of newline to carriage return/line feed

    // Set in/out baud rate
    cfsetispeed(&tty, B9600);
    cfsetospeed(&tty, B9600);

    // Save tty settings
    if (tcsetattr(serial_port, TCSANOW, &tty) != 0) {
        printf("Error %i from tcsetattr: %s\n", errno, strerror(errno));
        return 1;
    }

    // Allocate memory for read buffer
    int BUFFER_SIZE = 1024;
    char read_buf [BUFFER_SIZE];
    memset(&read_buf, '\0', sizeof(read_buf));
    int buf_pos = 0;
    while (1) {
        // Read bytes
        char temp_char;
        int num_bytes = read(serial_port, &temp_char, 1);

        if (num_bytes < 0) {
            printf("Error reading: %s", strerror(errno));
            return 1;
        }else if (num_bytes == 0) {
            // No data read, continue
            continue;
        } else {
            // Store the read byte in the buffer
            read_buf[buf_pos++] = temp_char;

            // Check for buffer overflow
            if (buf_pos >= BUFFER_SIZE) {
                printf("Buffer overflow detected!\n");
                return 1;
            }

            // Check if we've reached the end of the message
            if (temp_char == '}') {
                // Null-terminate the string
                read_buf[buf_pos] = '\0';

                // Process the complete message
                printf("Received complete message:\n%s\n", read_buf);

                // Reset buffer for next message
                memset(&read_buf, '\0', sizeof(read_buf));
                buf_pos = 0;
            }
        }


        // Print read data
        //printf("Read %i bytes. Received message: %s", num_bytes, read_buf);
        //memset(&read_buf, '\0', sizeof(read_buf));
    }

    close(serial_port);
    return 0;
}