#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks;
    // vector<int> marks(10);
    // vector<int> marks(10, 5);

    // Maximum size a vector can have
    cout << "Maximum size a vector can have: " << marks.max_size() << endl; // 2305843009213693951

    // Push 3 elements 10, 20, 30
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);

    // Size & Capacity of the vector
    cout << "Size of the vector: " << marks.size() << endl; // 3
    cout << "Capacity of the vector: " << marks.capacity() << endl; // 4

    // Clear the vector
    marks.clear();

    // Size & Capacity of the vector
    cout << "Size of the vector: " << marks.size() << endl; // 0 
    cout << "Capacity of the vector: " << marks.capacity() << endl; // 4

    // Push 5 elements 10, 20, 30, 40, 50
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);

    // Size & Capacity of the vector
    cout << "Size of the vector: " << marks.size() << endl;
    cout << "Capacity of the vector: " << marks.capacity() << endl;

    // Erase some elements from the vector
    marks.erase(marks.begin());

    // Elements of the vector
    cout << "Elements of the vector are — ";
    for (auto it = marks.begin(); it != marks.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Add more elements to the array
    marks.push_back(60);
    marks.push_back(70);
    marks.push_back(80);

    // Erase some elements from the vector
    marks.erase(marks.begin()+1, marks.begin()+4);

    // Elements of the vector
    cout << "Elements of the vector are — ";
    for (auto it = marks.begin(); it != marks.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert two elements
    marks.insert(marks.begin()+2, 90);
    marks.insert(marks.begin()+4, 100);

    // Elements of the vector
    cout << "Elements of the vector are — ";
    for (auto it = marks.begin(); it != marks.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}