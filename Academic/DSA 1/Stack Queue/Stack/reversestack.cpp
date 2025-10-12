#include <iostream>
#define MAX_SIZE 5
using namespace std;

int stackArr[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stackArr[top] = value;
        cout << value << " pushed into stack." << endl;
    }
}

int pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return -1;
    } else {
        int pop_value = stackArr[top];
        top--;
        return pop_value;
    }
}

int peek() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return -1;
    } else {
        return stackArr[top];
    }
}

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}

void reverseStack() {
    int tempStack[MAX_SIZE];
    int tempTop = -1;
    while (!isEmpty()) {
        tempStack[++tempTop] = pop();
    }
    for (int i = 0; i <= tempTop; i++) {
        push(tempStack[i]);
    }
}

int main() {
    cout << "Pushing values into the stack:" << endl;
    push(10);
    push(20);
    push(30);
    push(40);

    cout << "\nOriginal Stack:" << endl;
    display();

    cout << "\nReversing the stack..." << endl;
    reverseStack();

    cout << "\nReversed Stack:" << endl;
    display();

    return 0;
}
