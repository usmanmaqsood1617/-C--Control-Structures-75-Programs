// Program 04
// Control Structure: switch
// Difficulty: Easy
// Question:
// ⁠Write a C++ program that takes a number from 1 to 5 and displays the number in words.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number (1-5): ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "Four";
        break;
    case 5:
        cout << "Five";
        break;
    default:
        cout << "Invalid number";
    }

    return 0;
}
