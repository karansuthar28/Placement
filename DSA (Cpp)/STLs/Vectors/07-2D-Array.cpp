#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating 2D Vector
    vector<vector<int>> arr(5, vector<int>(4, 0));

    arr[0].push_back(7);
    arr[0].push_back(-28);
    arr[1].push_back(1);
    arr[2].push_back(9);
    arr[3].push_back(11);
    arr[4].push_back(-9);

    vector<vector<int>> temp(5);
    temp[0] = vector<int>(1, -1);
    temp[1] = vector<int>(2, -2);
    temp[2] = vector<int>(3, -3);
    temp[3] = vector<int>(4, -4);

    // Method 1: Displaying Vector
    for(int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;

    // Method 2: Displaying Vector
    for(vector<vector<int>>::iterator i = arr.begin(); i != arr.end(); i++) {
        for(vector<int>::iterator j = (*i).begin(); j != i->end(); j++) {
            cout << *j << " ";
        }

        cout << endl;
    } 
    cout << endl;

    // Method 3: Displaying Vector
    for(vector<int> i: arr) {
        for(int j: i) {
            cout << j << " ";
        }

        cout << endl;
    }
    cout << endl;

    // M1: Displaying array temp 
    for(int i = 0; i < temp.size(); i++) {
        for(int j = 0; j < temp[i].size(); j++) 
            cout << temp[i][j] << " ";
        
        cout << endl;
    }

    // M2: Displaying array temp
    for(vector<int> i : temp) {
        for(int j : i) 
            cout << j << " ";

        cout << endl;
    }

    // M3: Displaying array temp
    for(vector<vector<int>>::iterator i = temp.begin(); i != temp.end(); i++) {
        for(vector<int>::iterator j = (*i).begin(); j != i->end(); j++) 
            cout << *j << " ";
        
        cout << endl;
    }

    return 0;
}