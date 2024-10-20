import streamlit as st
import serial
import time
import re

# Set the title for the app
st.title("Smart Irrigation System - Real-Time Data (Serial Communication)")

# Create placeholders for the data
temperature_placeholder = st.empty()
humidity_placeholder = st.empty()

# Initialize the serial connection
serial_port = '/dev/cu.usbmodem112201'  # Update this to your actual serial port
baud_rate = 9600

try:
    ser = serial.Serial(serial_port, baud_rate, timeout=1)
    st.success(f"Connected to {serial_port}")
except Exception as e:
    st.error(f"Failed to connect to serial port: {e}")
    ser = None

# Function to parse the serial data received from Arduino
def parse_serial_data(data):
    # Use regular expressions to extract the values for humidity and temperature
    match = re.search(r'Humidity\s=\s([\d\.]+).*Temperature\s=\s([\d\.]+)', data)
    if match:
        humidity = float(match.group(1))
        temperature = float(match.group(2))
        return humidity, temperature
    return None, None

# Simulate streaming real-time data
if ser:
    while True:
        # Read serial data
        line = ser.readline().decode('utf-8').strip()

        # If a valid line is received, parse it
        if line:
            st.write(f"Raw Serial Data: {line}")  # Optional: Show the raw serial data
            humidity, temperature = parse_serial_data(line)

            # Update placeholders with sensor data if valid
            if humidity is not None and temperature is not None:
                temperature_placeholder.metric(label="Temperature (°C)", value=temperature)
                humidity_placeholder.metric(label="Humidity (%)", value=humidity)

        time.sleep(2)  # Update every 2 seconds
else:
    st.error("No serial connection available.")
