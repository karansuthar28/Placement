#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks;
    vector<int> age(5, 20);

    if(marks.empty()) cout << "Vector marks is empty" << endl;
    else cout << "Vector marks is not empty" << endl;

    if(age.empty() == true) cout << "Vector age is empty" << endl;
    else cout << "Vector age is not empty" << endl;
}