#include <iostream>
#include <vector>
using namespace std;

#define STACK_SIZE 5  // Maximum stack size

struct Stack {
    vector<char> stk;

    void push(char value) {
        if (stk.size() >= STACK_SIZE) {
            cout << "Stack is full! Cannot push " << value << endl;
            return;
        }
        stk.push_back(value);
        cout << value << " pushed into stack." << endl;
    }

    void pop() {
        if (stk.empty()) {
            cout << "Stack is empty! Cannot pop." << endl;
            return;
        }
        cout << stk.back() << " popped from stack." << endl;
        stk.pop_back();
    }

    void top() {
        if (stk.empty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Top element: " << stk.back() << endl;
    }

    void display() {
        if (stk.empty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = stk.size() - 1; i >= 0; i--)
            cout << stk[i] << " ";
        cout << endl;
    }

    void isFull() {
        if (stk.size() >= STACK_SIZE)
            cout << "Stack is full." << endl;
        else
            cout << "Stack is not full." << endl;
    }

    void isEmpty() {
        if (stk.empty())
            cout << "Stack is empty." << endl;
        else
            cout << "Stack is not empty." << endl;
    }
};

int main() {
    Stack s;
    int choice;
    char value;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Top\n4. Display\n5. IsFull\n6. IsEmpty\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push (char): ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.top();
                break;

            case 4:
                s.display();
                break;

            case 5:
                s.isFull();
                break;

            case 6:
                s.isEmpty();
                break;

            case 0:
                cout << "Exiting program." << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
}
