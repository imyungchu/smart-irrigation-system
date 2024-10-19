import streamlit as st
import random
import time
import pandas as pd

# Set the title for the app
st.title("Smart Irrigation System - Real-Time Data")

# Create placeholders for the current sensor values
temperature_placeholder = st.empty()
moisture_placeholder = st.empty()
waterflow_placeholder = st.empty()
light_placeholder = st.empty()

# Create line charts for historical data tracking
st.subheader("Sensor Data Trends")
chart_placeholder = st.empty()

# Store historical data in a DataFrame for plotting
data = {
    "Temperature (°C)": [],
    "Soil Moisture (%)": [],
    "Water Flow (L)": [],
    "Light Intensity (lux)": [],
    "Timestamp": []
}

# Mock function to simulate sensor data
def get_mock_sensor_data():
    temperature = round(random.uniform(20, 35), 2)  # Simulate temperature between 20°C and 35°C
    soil_moisture = round(random.uniform(10, 80), 2)  # Simulate soil moisture percentage
    water_flow = round(random.uniform(0.5, 5.0), 2)  # Simulate water flow in liters
    light_intensity = round(random.uniform(100, 1000), 2)  # Simulate light intensity in lux
    return temperature, soil_moisture, water_flow, light_intensity

# Simulate streaming real-time data and update the line chart
while True:
    # Get new sensor values
    temperature, soil_moisture, water_flow, light_intensity = get_mock_sensor_data()

    # Update current sensor value placeholders
    temperature_placeholder.metric(label="Temperature (°C)", value=temperature)
    moisture_placeholder.metric(label="Soil Moisture (%)", value=soil_moisture)
    waterflow_placeholder.metric(label="Water Flow (L)", value=water_flow)
    light_placeholder.metric(label="Light Intensity (lux)", value=light_intensity)

    # Append new data to the DataFrame
    timestamp = pd.Timestamp.now().strftime('%H:%M:%S')
    data["Temperature (°C)"].append(temperature)
    data["Soil Moisture (%)"].append(soil_moisture)
    data["Water Flow (L)"].append(water_flow)
    data["Light Intensity (lux)"].append(light_intensity)
    data["Timestamp"].append(timestamp)

    # Keep only the latest 20 data points to avoid chart overflow
    if len(data["Timestamp"]) > 20:
        for key in data.keys():
            data[key].pop(0)

    # Create a DataFrame for chart plotting
    df = pd.DataFrame(data).set_index("Timestamp")

    # Display the line chart using Streamlit
    chart_placeholder.line_chart(df)

    # Update every 5 seconds
    time.sleep(5)
