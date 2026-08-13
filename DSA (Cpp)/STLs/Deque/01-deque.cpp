#include <iostream>
#include <deque>
using namespace std;

int main() { 
    deque<int> d(5, -3); // -3 -3 -3 -3 -3
    d.push_back(71); // -3 -3 -3 -3 -3 71
    d.push_front(10); // 10 -3 -3 -3 -3 -3 71
    d.push_back(100); // -3 -3 -3 -3 -3 71 100
    d.push_front(108); // 108 10 -3 -3 -3 -3 -3 71 100
    d.pop_back(); // 108 10 -3 -3 -3 -3 -3 71
    d.pop_front(); // 10 -3 -3 -3 -3 -3 71

    cout << "Size of the deque: " << d.size() << endl;
    cout << "Front element of the deque: " << d.front() << endl;
    cout << "Last element of the deque: " << d.back() << endl;

    // M1: Displaying Deque 
    cout << "Elements of the deque: ";
    for(int i = 0; i < d.size(); i++)
        cout << d.at(i) << " ";
    cout << endl;

    // M2: Displaying Deque
    cout << "Elements of the deque: ";
    for(deque<int>::iterator it = d.begin(); it != d.end(); it++) 
        cout << *it << " ";
    cout << endl;

    // M3: Displaying Deque
    cout << "Elements of the deque: ";
    for(auto it = d.begin(); it != d.end(); it++) 
        cout << *it << " ";
    cout << endl;

    // M4: Displaying Deque
    cout << "Elements of the deque: ";
    for(int i: d) {
        cout << i << " ";
    }
    cout << endl;

    // Checking deque 'd' is empty or not
    if(d.empty()) cout << "Deque 'd' is empty" << endl;
    else cout << "Deque 'd' is not empty" << endl;

    // 10 -3 -3 -3 -3 -3 71
    d.insert(d.begin()+1, 420);
    cout << "Elements of the deque after inserting 420 at index 1: ";
    for(int i: d) {
        cout << i << " ";
    }
    cout << endl;

    d.erase(d.begin()); // 420 -3 -3 -3 -3 -3 71
    d.erase(d.begin()+2, d.begin()+5); // 420 -3 -3 71 

    cout << "Elements of the deque after removing some elements: ";
    for(int i: d) {
        cout << i << " ";
    }
    cout << endl;

    d.clear();

    cout << "Size of deque 'd' after clearing: " << d.size() << endl;
}