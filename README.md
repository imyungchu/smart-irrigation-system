# Smart Irrigation System 🌱💧

This project implements a real-time Smart Irrigation System to monitor soil moisture and temperature using an Arduino and display the data through a web interface. It is built using Python's Streamlit for the frontend and Flask for the backend.

## Motivation 💡

This project was developed as part of a hackathon to create a simple yet effective IoT solution for garden management. By leveraging Streamlit for real-time monitoring, the project aims to simplify the process of visualizing sensor data.

## Features ✨

- Real-time data display of soil moisture and temperature.
- Lightweight implementation using Python.
- Simple web interface built with Streamlit for both frontend and backend functionality.
- No database needed, focusing on live data monitoring.

## Project Structure 🗂️

```plaintext
smart-irrigation-system/
│
├── app.py                 # Main Streamlit app (both frontend and backend)
├── README.md              # Detailed project description and instructions
├── requirements.txt       # Python dependencies
├── .gitignore             # Files to ignore in Git
├── sensors/               # Folder for Arduino sketches
│   └── irrigation_sensor.ino  # Arduino code for collecting sensor data
├── static/                # Optional folder for images, logos, or static files
└── flask_app.py           # Separate Flask app if needed for later expansion
```

## Installation 🛠️

1. Clone the repository

2. Install dependencies
   Ensure you have Python installed. Then, run:

```bash
pip install -r requirements.txt
```

3. Running the Streamlit App
   To start the web interface and sensor data collection:

```bash
streamlit run app.py
```

## How it works ⚙️

- Arduino: The Arduino collects sensor data (e.g., soil moisture and temperature) and sends it to the Python server running Streamlit via HTTP requests.
- Streamlit: Streamlit serves as both the backend for receiving data and the frontend for visualizing real-time sensor values.

## Demo 🎥

[FIXME]
