// Program 11
// Control Structure: switch
// Difficulty: Difficult
// Question:
//
#include <iostream>
using namespace std;

int main()
{
    int choice, a, b;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "6. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5)
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    switch (choice)
    {
    case 1:
        cout << "Result = " << a + b;
        break;
    case 2:
        cout << "Result = " << a - b;
        break;
    case 3:
        cout << "Result = " << a * b;
        break;
    case 4:
        if (b != 0)
            cout << "Result = " << (float)a / b;
        else
            cout << "Cannot divide by zero";
        break;
    case 5:
        if (b != 0)
            cout << "Result = " << a % b;
        else
            cout << "Cannot calculate modulus by zero";
        break;
    case 6:
        cout << "Exiting calculator";
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}
