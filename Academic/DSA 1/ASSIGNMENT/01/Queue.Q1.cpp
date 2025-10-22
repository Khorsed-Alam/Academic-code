#include <iostream>
using namespace std;

#define MAX_SIZE 100

int queueArr[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int item, int N) {
    if (rear == N - 1) {
        cout << "Queue Overflow!" << endl;
    } else {
        if (front == -1) front = 0;
        rear++;
        queueArr[rear] = item;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout<<"Queue Underflow!!";
    } else {
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "size=0 items=NULL" << endl;
    } else {
        cout << "size=" << (rear - front + 1) << " items=";
        for (int i = front; i <= rear; i++) {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, T;
    cin >> N >> T;
    for (int i = 0; i < T; i++) {
        int choice;
        cin >> choice;
        if (choice == 1) {
            int item;
            cin >> item;
            enqueue(item, N);
        } else if (choice == 2) {
            dequeue();
        }
        display();
    }
    return 0;
}
