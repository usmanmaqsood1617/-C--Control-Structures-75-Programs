// Program 13
// Control Structures: nestedif
// Difficulty Level: difficult
// Question:
// Write a C++ program that checks whether a student passes three subjects and, if all are passed, determines whether the student qualifies for a scholarship based on an average of at least 85.

#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3;
    float average;

    cout << "Enter marks of three subjects: ";
    cin >> s1 >> s2 >> s3;

    if (s1 >= 40 && s2 >= 40 && s3 >= 40)
    {
        cout << "Student has passed all subjects." << endl;

        average = (s1 + s2 + s3) / 3.0;

        cout << "Average: " << average << endl;

        if (average >= 85)
            cout << "Student qualifies for scholarship.";
        else
            cout << "Student does not qualify for scholarship.";
    }
    else
    {
        cout << "Student has failed at least one subject.";
        cout << "\nStudent does not qualify for scholarship.";
    }

    return 0;
}
