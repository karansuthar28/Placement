#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Creation of unordered set
    unordered_set<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(2);

    cout << "Size of the set 's': " << s.size() << endl;
    
    if(s.find(2) != s.end()) cout << "Element 2 is found" << endl;
    else cout << "Element 2 is not found" << endl;

    if(s.count(4)) cout << "Element 4 is found" << endl;
    else cout << "Element 4 is not found" << endl;

    cout << endl;

    // Displaying set
    cout << "Elements of the set: ";
    for(int i: s) cout << i << " ";
    cout << endl;

    cout << "Elements of the set: ";
    for(unordered_set<int>::iterator it = s.begin(); it != s.end(); it++) cout << *it << " ";
    cout << endl;

    cout << endl;

    // Clearing the set
    s.clear();

    cout << "Size of the set 's': " << s.size() << endl;
}