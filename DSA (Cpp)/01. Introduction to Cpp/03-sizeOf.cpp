#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 3.14f;
    double c = 3.14159;
    long long d = 2534635635634;
    char e = 'B';
    string name = "Karan Suthar";

    cout << "Size of integer a = " << sizeof(a) << " bytes" << endl;
    cout << "Size of float b = " << sizeof(b) << " bytes" << endl;
    cout << "Size of double c = " << sizeof(c) << " bytes" << endl;
    cout << "Size of long long d = " << sizeof(d) << " bytes" << endl;
    cout << "Size of character e = " << sizeof(e) << " bytes" << endl;
    cout << "Length of string name = " << name.length() << " characters" << endl;
}