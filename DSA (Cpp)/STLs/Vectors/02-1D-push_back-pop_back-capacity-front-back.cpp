#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks;

    // Size & Capacity of the vector
    cout << "Size of marks vector: " << marks.size() << endl; // 0
    cout << "Capacity of marks vector: " << marks.capacity() << endl; // 0

    // Push 4 elements in the vector 10, 20, 30, 40
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    // Size & Capacity of the vector
    cout << "Size of marks vector: " << marks.size() << endl; // 4
    cout << "Capacity of marks vector: " << marks.capacity() << endl; // 4

    // First and Last element of the vector
    cout << "First element of the vector: " << *marks.begin() << endl; // 10
    cout << "Last element of the vector: " << *(marks.end()-1) << endl; // 40

    marks.pop_back();

    // Size & Capacity of the vector
    cout << "Size of marks vector: " << marks.size() << endl; // 3
    cout << "Capacity of marks vector: " << marks.capacity() << endl; // 4

    // First and Last element of the vector
    cout << "First element of the vector: " << *marks.begin() << endl; // 10
    cout << "Last element of the vector: " << *(marks.end()-1) << endl; // 30

    // First and Last element of the vector
    cout << "First element of the vector: " << marks.front() << endl; // 10
    cout << "Last element of the vector: " << marks.back() << endl; // 30

    return 0;
}