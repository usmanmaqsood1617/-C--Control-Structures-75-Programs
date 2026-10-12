// Program 15
// Control Structures: nestedif
// Difficulty Level: difficult
// Question:
// Write a C++ program that checks whether an employee has worked at least one year and, if so, determines the bonus based on performance: 20% for a rating of 9–10, 10% for 7–8, and 5% for 5–6. Ratings below 5 receive no bonus.

#include <iostream>
using namespace std;

int main()
{
    int years, rating;
    float salary, bonus;

    cout << "Enter years of service: ";
    cin >> years;

    cout << "Enter performance rating (1-10): ";
    cin >> rating;

    cout << "Enter salary: ";
    cin >> salary;

    if (years >= 1)
    {
        if (rating >= 9 && rating <= 10)
            bonus = salary * 0.20;
        else if (rating >= 7 && rating <= 8)
            bonus = salary * 0.10;
        else if (rating >= 5 && rating <= 6)
            bonus = salary * 0.05;
        else
            bonus = 0;

        cout << "Bonus: Rs. " << bonus;
    }
    else
    {
        cout << "Not eligible for bonus.";
    }

    return 0;
}
