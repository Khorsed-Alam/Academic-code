#include <iostream>
#include <cstring>
#define MAX_SIZE 100

using namespace std;

char stackArr[MAX_SIZE];
int top = -1;

void push(char ch) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        stackArr[++top] = ch;
    }
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return '\0';
    } else {
        return stackArr[top--];
    }
}

bool isEmpty() {
    return top == -1;
}

int main() {
    char inputStr[MAX_SIZE];
    cout << "Enter a string to reverse: ";
    cin.getline(inputStr, MAX_SIZE);

    for (int i = 0; i < strlen(inputStr); i++) {
        push(inputStr[i]);
    }

    cout << "Reversed string: ";
    while (!isEmpty()) {
        cout << pop();
    }
    cout << endl;

    return 0;
}

