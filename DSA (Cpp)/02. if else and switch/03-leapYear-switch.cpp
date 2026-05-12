#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    switch (num % 4)
    {
        case 0: 
            switch (num % 100)
            {
                case 0:
                    switch (num % 400) 
                    {
                        case 0:
                            cout << num << " is a Leap Year." << endl;
                            break;

                        default:
                            cout << num << " is not a Leap Year." << endl; 
                            break;
                    } break;

                default: 
                    cout << num << " is a Leap Year." << endl;
                    break;
            } break;

        default:
            cout << num << " is a Non-Leap Year." << endl;
            break;
    }
}