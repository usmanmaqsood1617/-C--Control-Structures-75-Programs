// Program 11
// Control Structures: nestedif
// Difficulty Level: difficult
// Question:
// Write a C++ program that checks a username and password. If both are correct, check whether the account is active before allowing login.

#include <iostream>
using namespace std;

int main()
{
    string username, password;
    char active;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "1234")
    {
        cout << "Is your account active? (Y/N): ";
        cin >> active;

        if (active == 'Y' || active == 'y')
            cout << "Login successful.";
        else
            cout << "Your account is inactive.";
    }
    else
    {
        cout << "Incorrect username or password.";
    }

    return 0;
}
