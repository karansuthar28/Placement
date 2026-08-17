#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 1D Vector with size 0
    vector<int> marks;

    // 1D Vector with size 10 and all values initialized to 0
    vector<int> miles(10);

    // 1D Vector with size 5 and all values initialized to 100
    vector<int> heights(5, 100);

    // Displaying the sizes of the vectors
    cout << "Size of marks vector: " << marks.size() << endl; // 0
    cout << "Size of miles vector: " << miles.size() << endl; // 10
    cout << "Size of heights vector: " << heights.size() << endl; // 5

    // Displaying the values of the vectors
    cout << "Values in marks vector: ";
    for(int i = 0; i < marks.size(); i++) {
        cout << marks[i] << " ";
    } 
    cout << endl; // 

    cout << "Values in miles vector: ";
    for(int i = 0; i < miles.size(); i++) {
        cout << miles[i] << " ";
    } 
    cout << endl; // 0 0 0 0 0 0 0 0 0 0

    cout << "Values in heights vector: ";
    for(int i = 0; i < heights.size(); i++) {
        cout << heights[i] << " ";
    }
    cout << endl; // 100 100 100 100 100

    // Displaying the values of the vector using iterator
    cout << "Values in marks vector: ";
    for(auto it = marks.begin(); it != marks.end(); it++)
        cout << *it << " ";
    cout << endl; //
 
    cout << "Values in miles vector: ";
    for(auto it = miles.begin(); it != miles.end(); it++)
        cout << *it << " ";
    cout << endl; // 0 0 0 0 0 0 0 0 0 0

    cout << "Values in height vector: ";
    for(auto it = heights.begin(); it != heights.end(); it++)
        cout << *it << " ";
    cout << endl; // 100 100 100 100 100
}