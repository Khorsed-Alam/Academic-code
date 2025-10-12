#include <iostream>
#define MAX_SIZE 5
using namespace std;

int queueArr[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        cout << "Queue Overflow!" << endl;
    } else {
        if (front == -1) front = 0;
        rear++;
        queueArr[rear] = value;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow!" << endl;
        return -1;
    } else {
        int value = queueArr[front];
        front++;
        if (front > rear) {
            front = rear = -1;
        }
        return value;
    }
}

bool isEmpty() {
    return front == -1;
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}

void reverseQueue() {
    if (isEmpty()) return;
    int data = dequeue();
    reverseQueue();
    enqueue(data);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    cout << "Original Queue:" << endl;
    display();

    cout << "\nReversing the queue..." << endl;
    reverseQueue();

    cout << "\nReversed Queue:" << endl;
    display();

    return 0;
}
