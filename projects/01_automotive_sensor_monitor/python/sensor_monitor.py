
# Automotive Sensor Monitoring System

# Step 1: Define sensor readings
temperature = 115.0
battery_voltage = 8.0

# Step 2: Define sensor limits
MAX_TEMPERATURE = 100.0
MIN_VOLTAGE = 9.0
MAX_VOLTAGE = 16.0

# Step 3: Display sensor readings
print("===== AUTOMOTIVE SENSOR MONITOR =====")

print(f"Engine Temperature: {temperature} C")
print(f"Battery Voltage: {battery_voltage} V")

# Step 4: Check engine temperature
if temperature > MAX_TEMPERATURE:
    print("FAULT: High Engine Temperature")
else:
    print("Engine Temperature: NORMAL")

# Step 5: Check battery voltage
if battery_voltage < MIN_VOLTAGE:
    print("FAULT: Low Battery Voltage")
elif battery_voltage > MAX_VOLTAGE:
    print("FAULT: High Battery Voltage")
else:
    print("Battery Voltage: NORMAL")
