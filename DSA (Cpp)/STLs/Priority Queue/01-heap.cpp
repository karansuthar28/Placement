#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Creation of priority queue (heap)
    priority_queue<int> p; // Max Heap -> Maximum Value -> Highest Priority

    p.push(10);
    p.push(20);
    p.push(30);
    p.push(15);
    p.push(23);
    p.push(100);
    p.pop();

    cout << "Size of the priority queue 'p': " << p.size() << endl;
    cout << "Highest priority element (Max-Heap) is: " << p.top() << endl;
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> q; // Min Heap -> Minimum Value -> Highest Priority

    q.push(20);
    q.push(10);
    q.push(30);
    q.push(12);
    q.push(23);
    q.push(100);
    q.pop();

    cout << "Size of the priority queue 'q': " << q.size() << endl;
    cout << "Highest priority element (Min-Heap) is: " << q.top() << endl;
}

