// Program 10
// Control Structures: nestedif
// Difficulty Level: moderate
// Question:
// Write a C++ program that checks whether a bank account has a sufficient balance and, if so, checks whether the withdrawal amount is a multiple of 500 before allowing the withdrawal.

#include <iostream>
using namespace std;

int main()
{
    int balance, amount;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (balance >= amount && amount > 0)
    {
        if (amount % 500 == 0)
        {
            balance = balance - amount;
            cout << "Withdrawal successful." << endl;
            cout << "Remaining balance = " << balance;
        }
        else
        {
            cout << "Amount must be a multiple of 500.";
        }
    }
    else
    {
        cout << "Insufficient balance or invalid amount.";
    }

    return 0;
}
