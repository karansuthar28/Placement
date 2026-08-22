#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int num) {
    cout << 2*num << " ";
}

int main() {
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Display vector 'arr' using for each loop 
    cout << "Elements of vector 'arr': ";
    for(int i: arr) cout << i << " ";
    cout << endl;

    // std::for_each
    cout << "Elements multiply by two: ";
    for_each(arr.begin(), arr.end(), printDouble);
    cout << endl;

    // std::find
    auto it = find(arr.begin(), arr.end(), 40);
    cout << "Element at index three  : " << *it << endl;
}