#include <iostream>
using namespace std;

// Function converter
double celciusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);

int main() {
    double temperature;
    char scale;
    
    cout<< "Enter temperature : ";
    cin>> temperature;
    
    cout<< "Enter scale (C is for Celsius , F is for Fahrenheit) : ";
    cin>> scale;
    
    if (scale == 'C' || scale == 'c') {
        double convertedTemp = celciusToFahrenheit(temperature);
        cout<<"Converted temperature: "<<convertedTemp<<" F"<<endl;
    }
    else if (scale == 'F' || scale == 'f') {
        double convertedTemp = fahrenheitToCelcius(temperature);
        cout<<"Converted temperature: "<<convertedTemp<<" C"<<endl;
    }
    else {
        cout << "Invalid scale entered!" << endl;
    }
    
    return 0;
}

// Function to convert Celsius to Fahrenheit
double celciusToFahrenheit(double celcius) {
    return (celcius * 9/5) + 32;
}  

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

