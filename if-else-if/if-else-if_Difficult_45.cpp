// Program 45
// Control Structure: If-Else-if
// Difficulty: Difficult 
// Question:
// 45. Write a C++ program that takes a person's monthly income and calculates tax:
// 0% up to Rs. 50,000, 5% for Rs. 50,001–100,000, 10% for Rs. 100,001–200,000, and 15% above Rs. 200,000. Apply the selected rate to the entire income.

#include <iostream>
using namespace std;

int main()
{
    float income, tax;

    cout << "Enter monthly income: ";
    cin >> income;

    if (income <= 50000)
    {
        tax = income * 0 / 100;
    }
    else if (income <= 100000)
    {
        tax = income * 5 / 100;
    }
    else if (income <= 200000)
    {
        tax = income * 10 / 100;
    }
    else
    {
        tax = income * 15 / 100;
    }

    cout << "Tax = Rs. " << tax << endl;

    return 0;
}
