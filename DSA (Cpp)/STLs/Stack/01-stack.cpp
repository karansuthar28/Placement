#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(-50);

    cout << "Top element of the stack: " << st.top() << endl;
    cout << "Size of the stack: " << st.size() << endl;

    st.pop(); 

    cout << endl;
    cout << "Top element of the stack: " << st.top() << endl;
    cout << "Size of the stack: " << st.size() << endl;

    cout << endl;

    // Check if the stack is empty or not
    if(st.empty()) cout << "Stack is empty" << endl;
    else cout << "Stack is not empty" << endl;

    stack<int> temp;
    temp.push('K'); // 75
    temp.push('A'); // 65
    temp.push('R'); // 82
    temp.push('A'); // 65
    temp.push('N'); // 78

    cout << endl;
    cout << "Top element of the temporary stack: " << temp.top() << endl;
    cout << "Size of the temporary stack: " << temp.size() << endl;

    temp.swap(st);

    // Stack 'st'
    cout << endl;
    cout << "Top element of the temporary stack: " << st.top() << endl;
    cout << "Size of the temporary stack: " << st.size() << endl;

    // Stack 'temp'
    cout << endl;
    cout << "Top element of the temporary stack: " << temp.top() << endl;
    cout << "Size of the temporary stack: " << temp.size() << endl;
}