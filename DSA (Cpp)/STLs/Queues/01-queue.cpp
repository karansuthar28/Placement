#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(-10); // -10 
    q.push(20);  // -10 20  
    q.push(30);  // -10 20 30  
    q.push(40);  // -10 20 30 40 
    q.push(50);  // -10 20 30 40 50
    q.pop();     //  20 30 40 50  

    cout << "Size of the queue q: " << q.size() << endl;
    cout << "Front element of the queue q: " << q.front() << endl;
    cout << "Rear element of the queue q: " << q.back() << endl;

    cout << endl;
    
    queue<int> p; 

    p.push(11);   // 11
    p.push(111);  // 11 111
    p.push(1111); // 11 111 1111

    cout << "Size of the queue p: " << p.size() << endl;
    cout << "Front element of the queue p: " << p.front() << endl;
    cout << "Rear element of the queue p: " << p.back() << endl;

    cout << endl;
    q.swap(p);

    cout << "Size of the queue q: " << q.size() << endl;
    cout << "Front element of the queue q: " << q.front() << endl;
    cout << "Rear element of the queue q: " << q.back() << endl;

    cout << endl;

    cout << "Size of the queue p: " << p.size() << endl;
    cout << "Front element of the queue p: " << p.front() << endl;
    cout << "Rear element of the queue p: " << p.back() << endl;

    cout << endl;

    // Checking queue is empty or not
    if(q.empty())
        cout << "Queue 'q' is empty" << endl;
    else  
        cout << "Queue 'q' is not empty" << endl;
}