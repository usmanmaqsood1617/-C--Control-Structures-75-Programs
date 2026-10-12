// Program 13
// Control Structure: switch
// Difficulty: Difficult
// Question:
// Write a C++ program that takes a menu choice for a bank account: deposit, withdraw, check balance, or exit. Update and display the balance as required.

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 1000, amount;

    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter deposit amount: ";
        cin >> amount;
        if (amount > 0)
        {
            balance += amount;
            cout << "Balance = " << balance;
        }
        else
        {
            cout << "Invalid amount";
        }
        break;

    case 2:
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Balance = " << balance;
        }
        else
        {
            cout << "Invalid amount or insufficient balance";
        }
        break;

    case 3:
        cout << "Balance = " << balance;
        break;

    case 4:
        cout << "Exiting bank account";
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}
