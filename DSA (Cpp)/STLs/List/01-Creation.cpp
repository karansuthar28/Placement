#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ll;
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);
    ll.push_front(10);
    ll.push_front(5);
    ll.pop_back();
    ll.pop_front();

    // Displaying List
    for(auto i = ll.begin(); i != ll.end(); i++)   
        cout << *i << " ";
    cout << endl;

    // Displaying List
    for(list<int>::iterator it = ll.begin(); it != ll.end(); it++) 
        cout << *it << " ";
    cout << endl;

    // Checking list is empty or not
    if(ll.empty()) cout << "List is empty" << endl;
    else cout << "List is not empty" << endl;

    // Check the size of the list
    cout << "Size of the list: " << ll.size() << endl;

    // Clearing the list 
    ll.clear(); 

    // Checking list is empty or not
    if(ll.empty()) cout << "List is empty" << endl;
    else cout << "List is not empty" << endl;

    // Check the size of the list
    cout << "Size of the list: " << ll.size() << endl;
}