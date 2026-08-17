#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;

    // cout << marks[0] << endl; // Segmentation Fault
    // cout << marks.at(0) << endl; // Aborted (out_of_range)

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);

    cout << "Elements of the vector are— " << endl;
    for(int i = 0; i < marks.size(); i++) {
        cout << marks.at(i) << " ";
    }
    cout << endl;

    cout << "Element at index 3: " << marks.at(3) << endl;

    // Reserve function
    marks.reserve(15);

    cout << "Size of vector marks: " << marks.size() << endl;
    cout << "Capacity of vector marks: " << marks.capacity() << endl;
}