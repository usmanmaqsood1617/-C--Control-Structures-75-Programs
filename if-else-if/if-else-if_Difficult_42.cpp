// Program 42
// Control Structure: If-Else-if
// Difficulty: Difficult 
// Question:
// Write a C++ program that takes three sides of a triangle and determines whether the triangle is invalid, equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Invalid Triangle";
    }
    else if (a == b && b == c)
    {
        cout << "Equilateral Triangle";
    }
    else if (a == b || b == c || a == c)
    {
        cout << "Isosceles Triangle";
    }
    else if (a != b && b != c && a != c)
    {
        cout << "Scalene Triangle";
    }

    return 0;
}
