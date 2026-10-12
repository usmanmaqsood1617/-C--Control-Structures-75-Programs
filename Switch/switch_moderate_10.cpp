// Program 10
// Control Structure: switch
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a number from 1 to 4 and displays a selected shape's name: circle, square, rectangle, or triangle.

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Rectangle\n";
    cout << "4. Triangle\n";

    cout << "Enter a number (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Circle";
        break;
    case 2:
        cout << "Square";
        break;
    case 3:
        cout << "Rectangle";
        break;
    case 4:
        cout << "Triangle";
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}
