#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);

    list<int> l2; 
    l2.push_front(-50);
    l2.push_front(-40);
    l2.push_front(-30);
    l2.push_front(-20);
    l2.push_front(-10);

    // Printing list 1
    cout << "List 1: ";
    for(int i: l1) 
        cout << i << " ";
    cout << endl;

    // Printing list 2
    cout << "List 2: ";
    for(list<int>::iterator it = l2.begin(); it != l2.end(); it++) 
        cout << *it << " ";
    cout << endl;

    l1.swap(l2);

    // Printing list 1
    cout << "List 1: ";
    for(int i: l1) 
        cout << i << " ";
    cout << endl;

    // Printing list 2
    cout << "List 2: ";
    for(list<int>::iterator it = l2.begin(); it != l2.end(); it++) 
        cout << *it << " ";
    cout << endl;
}