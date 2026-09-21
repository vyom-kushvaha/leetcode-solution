class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        // Convert Celsius to Kelvin
        double kelvin = celsius + 273.15;

        // Convert Celsius to Fahrenheit
        double fahrenheit = celsius * 1.8 + 32;

        // Return Kelvin first, then Fahrenheit
        return {kelvin, fahrenheit};
    }
};