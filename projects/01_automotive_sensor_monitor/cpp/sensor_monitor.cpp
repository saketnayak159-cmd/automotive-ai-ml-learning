
#include <iostream>

int main()
{
    // Step 1: Define sensor readings
    double temperature = 115.0;
    double battery_voltage = 8.0;

    // Step 2: Define sensor limits
    const double MAX_TEMPERATURE = 100.0;
    const double MIN_VOLTAGE = 9.0;
    const double MAX_VOLTAGE = 16.0;

    // Step 3: Display sensor readings
    std::cout << "===== AUTOMOTIVE SENSOR MONITOR =====\n";

    std::cout << "Engine Temperature: " << temperature << " C\n";
    std::cout << "Battery Voltage: " << battery_voltage << " V\n";

    // Step 4: Check engine temperature
    if (temperature > MAX_TEMPERATURE)
    {
        std::cout << "FAULT: High Engine Temperature\n";
    }
    else
    {
        std::cout << "Engine Temperature: NORMAL\n";
    }

    // Step 5: Check battery voltage
    if (battery_voltage < MIN_VOLTAGE)
    {
        std::cout << "FAULT: Low Battery Voltage\n";
    }
    else if (battery_voltage > MAX_VOLTAGE)
    {
        std::cout << "FAULT: High Battery Voltage\n";
    }
    else
    {
        std::cout << "Battery Voltage: NORMAL\n";
    }

    return 0;
}
