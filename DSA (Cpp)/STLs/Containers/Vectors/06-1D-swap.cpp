#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks(5, 11);
    vector<int> age = {10, 20, 30, 40, 50, 60, 70};

    // Size and Capacity of the vector marks
    cout << "Size of the vector marks: " << marks.size() << endl; // 5
    cout << "Capacity of the vector marks: " << marks.capacity() << endl; // 5

    // Size and Capacity of the vector age
    cout << "Size of the vector marks: " << age.size() << endl; // 7
    cout << "Capacity of the vector marks: " << age.capacity() << endl; // 7

    // Print the content of the vector marks
    cout << "Elements of vector marks: ";
    for (int i = 0; i < marks.size(); i++) {
        cout << marks[i] << " ";
    }
    cout << endl; // 11 11 11 11 11

    // Print the content of the vector age
    cout << "Elements of vector age: ";
    for (int i = 0; i < age.size(); i++) {
        cout << age.at(i) << " ";
    }
    cout << endl; // 10 20 30 40 50 60 70

    marks.swap(age);

    // Size and Capacity of the vector marks
    cout << "Size of the vector marks: " << marks.size() << endl; // 7
    cout << "Capacity of the vector marks: " << marks.capacity() << endl; // 7

    // Size and Capacity of the vector age
    cout << "Size of the vector marks: " << age.size() << endl; // 5
    cout << "Capacity of the vector marks: " << age.capacity() << endl; // 5

    // Print the content of the vector marks
    cout << "Elements of vector marks: ";
    for(int x : marks) {
        cout << x << " ";
    }
    cout << endl; // 10 20 30 40 50 60 70

    // Print the content of the vector age
    cout << "Elements of vector age: ";
    for(vector<int>::iterator i = age.begin(); i != age.end(); i++) {
        cout << *i << " ";
    }
    cout << endl; // 11 11 11 11 11
}