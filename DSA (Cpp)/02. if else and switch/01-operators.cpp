#include <iostream>
using namespace std;

int main()
{
    // Variables
    int a = 20, b = 10;

    // Arithmetic Operators
    cout << "Arithmetic Operators" << endl;
    cout << "a + b = " << a+b << endl;
    cout << "a - b = " << a-b << endl;
    cout << "a * b = " << a*b << endl;
    cout << "a / b = " << a/b << endl;
    cout << "a % b = " << a%b << endl;
    cout << endl;

    // Bitwise Operators 
    cout << "Bitwise Operators" << endl;
    cout << "a>>3 = " << (a>>3) << endl; 
    cout << "a<<3 = " << (a<<3) << endl; 
    cout << "~a = " << ~a << endl; 
    cout << "a&12 = " << (a&12) << endl; 
    cout << "a|12 = " << (a|12) << endl; 
    cout << "a^12 = " << (a^12) << endl; 
    cout << endl;

    // Logical Operators 
    cout << "Logical Operators" << endl;
    cout << "a&&B = " << (a && b) << endl;
    cout << "a||b = " << (a || b) << endl;
    cout << "!a = " << (!a) << endl;
    cout << endl;

    // Relational Operators 
    cout << "Relational Operators" << endl;
    cout << "a>b = " << (a>b) << endl;
    cout << "a>=b = " << (a>=b) << endl;
    cout << "a<b = " << (a<b) << endl;
    cout << "a<=b = " << (a<=b) << endl;
    cout << "a==b = " << (a==b) << endl;
    cout << "a!=b = " << (a!=b) << endl;
}