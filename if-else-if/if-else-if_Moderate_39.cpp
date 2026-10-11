// Program 39
// Control Structure: If-Else-if
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a character and identifies whether it is an uppercase letter, lowercase letter, digit, or special character
#include <iostream>
using namespace std;
int main ()
{
	char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase letter. "; 
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase letter.";
    }
    else if (ch >= '1' && ch <= '9')
    {
        cout << "Digit.";
    }
    else
    {
        cout << "Special character.";
    }
    

return 0;
}