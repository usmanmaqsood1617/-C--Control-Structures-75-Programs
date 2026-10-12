// Program 12
// Control Structures: nestedif
// Difficulty Level: difficult
// Question:
// Write a C++ program that checks whether a triangle is valid using the sum of its sides and, if valid, determines whether it is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Triangle is valid." << endl;

        if (a == b && b == c)
            cout << "Equilateral triangle.";
        else if (a == b || a == c || b == c)
            cout << "Isosceles triangle.";
        else
            cout << "Scalene triangle.";
    }
    else
    {
        cout << "Triangle is not valid.";
    }

    return 0;
}
