#include <iostream>
using namespace std;

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1; // Leap year
            } else {
                return 0; // Not a leap year
            }
        } else {
            return 1; // Leap year
        }
    } else {
        return 0; // Not a leap year
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (isLeapYear(num)) {
        cout << num << " is a leap year." << endl;
    } else {
        cout << num << " is not a leap year." << endl;
    }
}