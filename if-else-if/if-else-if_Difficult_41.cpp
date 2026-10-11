// Program 41
// Control Structure: If-Else-if
// Difficulty: Difficult 
// Question:
// Write a C++ program that takes a person's basic salary and calculates a bonus:
// 20% for salary below 30,000, 15% for 30,000–49,999, 10% for 50,000–79,999, and 5% for 80,000 or above.
#include <iostream>
using namespace std;

int main()
{
    float sal, bonus;

    cout << "Enter your salary: ";
    cin >> sal;

    if (sal < 30000)
    {
        bonus = sal * 20 / 100;
    }
    else if (sal >= 30000 && sal <= 49999)
    {
        bos = sal * 15 / 100;
    }
    else if (sal >= 50000 && sal <= 79999)
    {
        bouns = sal * 10 / 100;
    }
    else
    {
        bouns = sal * 5 / 100;
    }
    
    cout << "Bouns = Rs."<<bouns<<endl;
        
    return 0;
}