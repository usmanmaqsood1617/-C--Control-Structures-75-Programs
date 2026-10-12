// Program 03
// Control Structures: nestedif
// Difficulty Level: Easy
// Question:
// Write a C++ program that checks whether a student's marks are at least 50 and, if so, checks whether attendance is at least 75%.

#include <iostream>
using namespace std;

int main()
{
    float marks, attendance;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50)
    {
        cout << "Enter attendance percentage: ";
        cin >> attendance;

        if (attendance >= 75)
            cout << "Student is eligible.";
        else
            cout << "Attendance is below 75%.";
    }
    else
    {
        cout << "Marks are below 50.";
    }

    return 0;
}
