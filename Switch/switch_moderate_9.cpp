// Program 09
// Control Structure: switch
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a menu choice (1–3) and calculates the area of a circle, rectangle, or triangle.

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float radius, length, width, base, height;

    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Triangle\n";

    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Area = " << 3.14159 * radius * radius;
        break;

    case 2:
        cout << "Enter length and width: ";
        cin >> length >> width;
        cout << "Area = " << length * width;
        break;

    case 3:
        cout << "Enter base and height: ";
        cin >> base >> height;
        cout << "Area = " << 0.5 * base * height;
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}
