// Program 05
// Control Structure: switch
// Difficulty: Easy
// Question:
// Write a C++ program that takes a character (a, e, i, o, or u) and displays the corresponding vowel name; display an invalid-input message for other characters.

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a vowel (a, e, i, o, u): ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
        cout << "A";
        break;
    case 'e':
        cout << "E";
        break;
    case 'i':
        cout << "I";
        break;
    case 'o':
        cout << "O";
        break;
    case 'u':
        cout << "U";
        break;
    default:
        cout << "Invalid input";
    }

    return 0;
}
