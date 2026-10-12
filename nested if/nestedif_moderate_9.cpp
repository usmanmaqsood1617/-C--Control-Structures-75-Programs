// Program 09
// Control Structures: nestedif
// Difficulty Level: moderate
// Question:
// Write a C++ program that checks whether a product is in stock and, if so, checks whether the customer's requested quantity is available.

#include <iostream>
using namespace std;

int main()
{
    int stock, quantity;

    cout << "Enter available stock quantity: ";
    cin >> stock;

    if (stock > 0)
    {
        cout << "Enter requested quantity: ";
        cin >> quantity;

        if (quantity > 0 && quantity <= stock)
            cout << "Requested quantity is available.";
        else
            cout << "Requested quantity is not available.";
    }
    else
    {
        cout << "Product is out of stock.";
    }

    return 0;
}
