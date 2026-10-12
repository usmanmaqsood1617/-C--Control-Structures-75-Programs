// Program 14
// Control Structure: switch
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a menu choice for temperature conversion: Celsius to Fahrenheit, Fahrenheit to Celsius, or Celsius to Kelvin.

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float temp;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Celsius to Kelvin\n";

    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    switch (choice)
    {
    case 1:
        cout << "Fahrenheit = " << (temp * 9 / 5) + 32;
        break;

    case 2:
        cout << "Celsius = " << (temp - 32) * 5 / 9;
        break;

    case 3:
        cout << "Kelvin = " << temp + 273.15;
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}
