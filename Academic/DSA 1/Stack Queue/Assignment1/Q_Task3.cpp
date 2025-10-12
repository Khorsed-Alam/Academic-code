#include <iostream>
#include <stack>
using namespace std;

stack<int> s1, s2;

void enqueue(int x) {
    s1.push(x);
}

int dequeue() {
    if (s1.empty() && s2.empty()) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    int front = s2.top();
    s2.pop();
    return front;
}

bool isEmpty() {
    return s1.empty() && s2.empty();
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout << "Dequeued: " << dequeue() << endl;
    cout << "Dequeued: " << dequeue() << endl;
    enqueue(40);
    enqueue(50);
    cout << "Dequeued: " << dequeue() << endl;
    cout << "Dequeued: " << dequeue() << endl;
    cout << "Dequeued: " << dequeue() << endl;
    cout << "Queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
