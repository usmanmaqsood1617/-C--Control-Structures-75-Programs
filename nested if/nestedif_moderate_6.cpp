// Program 06
// Control Structures: nestedif
// Difficulty Level: moderate
// Question:
// Write a C++ program that checks whether a student passes the first subject and, if so, checks whether they pass the second subject. A pass requires at least 40 marks in each.

#include <iostream>
using namespace std;

int main()
{
    int marks1, marks2;

    cout << "Enter marks for first subject: ";
    cin >> marks1;

    if (marks1 >= 40)
    {
        cout << "Enter marks for second subject: ";
        cin >> marks2;

        if (marks2 >= 40)
            cout << "Student passes both subjects.";
        else
            cout << "Student fails the second subject.";
    }
    else
    {
        cout << "Student fails the first subject.";
    }

    return 0;
}
