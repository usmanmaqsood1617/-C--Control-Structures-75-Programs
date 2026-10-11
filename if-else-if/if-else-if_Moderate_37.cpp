// Program 37
// Control Structure: If-Else-if
// Difficulty: Moderate
// Question:
// Write a C++ program that takes a month number (1–12) and displays the corresponding season using these categories:
// winter (December–February), spring (March–May), summer (June–August), and autumn (September–November).
#include <iostream>
using namespace std;
int main ()
{
	int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month == 12 || month == 1 || month == 2)
    {
        cout << "Winter";
    }
    else if (month >= 3 && month <= 5)
    {
        cout << "Spring";
    }
    else if (month >= 6 && month <= 8)
    {
        cout << "Summer";
    }
    else if (month >= 9 && month <= 11)
    {
        cout << "Autumn";
    }
    else
    {
        cout << "Invalid month number";
    }

	
	
return 0;
}