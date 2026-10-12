// Program 08
// Control Structure: switch
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a character representing a traffic light (R, Y, G) and displays “Stop,” “Get Ready,” or “Go.”

#include <iostream>
using namespace std;

int main()
{
    char light;

    cout << "Enter traffic light (R, Y, G): ";
    cin >> light;

    switch (light)
    {
    case 'R':
        cout << "Stop";
        break;
    case 'Y':
        cout << "Get Ready";
        break;
    case 'G':
        cout << "Go";
        break;
    default:
        cout << "Invalid input";
    }

    return 0;
}
