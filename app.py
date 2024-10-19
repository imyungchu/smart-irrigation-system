import streamlit as st
import random
import time

# Set the title for the app
st.title("Smart Irrigation System - Real-Time Data")

# Create placeholders for the data
temperature_placeholder = st.empty()
moisture_placeholder = st.empty()
waterflow_placeholder = st.empty()
light_placeholder = st.empty()

# Mock function to simulate sensor data
def get_mock_sensor_data():
    temperature = round(random.uniform(20, 35), 2)  # Simulate temperature between 20°C and 35°C
    soil_moisture = round(random.uniform(10, 80), 2)  # Simulate soil moisture percentage
    water_flow = round(random.uniform(0.5, 5.0), 2)  # Simulate water flow in liters
    light_intensity = round(random.uniform(100, 1000), 2)  # Simulate light intensity in lux
    return temperature, soil_moisture, water_flow, light_intensity

# Simulate streaming real-time data
while True:
    temperature, soil_moisture, water_flow, light_intensity = get_mock_sensor_data()

    # Update the placeholders with mock data
    temperature_placeholder.metric(label="Temperature (°C)", value=temperature)
    moisture_placeholder.metric(label="Soil Moisture (%)", value=soil_moisture)
    waterflow_placeholder.metric(label="Water Flow (L)", value=water_flow)  # New: Water flow in liters
    light_placeholder.metric(label="Light Intensity (lux)", value=light_intensity)  # New: Light intensity in lux

    time.sleep(5)  # Update every 5 seconds
