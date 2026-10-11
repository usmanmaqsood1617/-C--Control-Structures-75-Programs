// Program 44
// Control Structure: If-Else-if
// Difficulty: Difficult 
// Question:
// Write a C++ program that takes a student's marks and attendance percentage. 
//Display “Eligible for exam” if marks are at least 50 and attendance is at least 75%;
// otherwise, identify whether marks, attendance, or both fail the requirements.

#include <iostream>
using namespace std;

int main()
{
    float mark, att;

    cout << "Enter marks: ";
    cin >> mark;

    cout << "Enter attendance percentage: ";
    cin >> att;

    if (mark >= 50 && att >= 75)
    {
        cout << "Eligible for exam";
    }
    else if (mark < 50 && att < 75)
    {
        cout << "Both marks and attendance fail";
    }
    else if (mark < 50)
    {
        cout << "Marks fail";
    }
    else if (att < 75)
    {
        cout << "Attendance fails";
    }

    return 0;
}
