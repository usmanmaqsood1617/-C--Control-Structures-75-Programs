// Program 14
// Control Structures: nestedif
// Difficulty Level: difficult
// Question:
// Write a C++ program that checks whether a customer has sufficient bank balance and, if so, whether the withdrawal amount is within the daily limit and is a valid positive amount.

#include <iostream>
using namespace std;

int main()
{
    float balance, amount;
    const float limit = 50000;

    cout << "Enter bank balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount > 0)
    {
        if (amount <= balance)
        {
            if (amount <= limit)
            {
                cout << "Withdrawal successful." << endl;
                cout << "Remaining balance: Rs. "
                     << balance - amount;
            }
            else
            {
                cout << "Daily withdrawal limit exceeded.";
            }
        }
        else
        {
            cout << "Insufficient bank balance.";
        }
    }
    else
    {
        cout << "Invalid withdrawal amount.";
    }

    return 0;
}
