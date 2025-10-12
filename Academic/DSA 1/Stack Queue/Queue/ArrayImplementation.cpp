#include <iostream>
#define MAX_SIZE 5
using namespace std;

int queueArr[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        cout << "Queue Overflow!" << endl;
    } else {
        if (front == -1) front = 0; // set front when first element is added
        rear++;
        queueArr[rear] = value;
        cout << value << " enqueued into Queue." << endl;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
        return -1;
    } else {
        int dequeuedValue = queueArr[front];
        front++;
        return dequeuedValue;
    }
}

int peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
        return -1;
    } else {
        return queueArr[front];
    }
}

bool isEmpty() {
    return (front == -1 || front > rear);
}

bool isFull() {
    return (rear == MAX_SIZE - 1);
}

void display() {
    if(front==-1 || front>rear){
        cout<<"Queue is empty! "<<endl;
    }  else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "----- QUEUE OPERATIONS -----" << endl;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    cout << "Front element: " << peek() << endl;

    cout << "Dequeue value: " << dequeue() << endl;
    cout << "Dequeue value: " << dequeue() << endl;

    display();

    cout << "Is Queue Empty: " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Queue Full: " << (isFull() ? "Yes" : "No") << endl;

    return 0;
}
