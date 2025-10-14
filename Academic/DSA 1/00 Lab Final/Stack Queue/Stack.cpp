#include <iostream>
#include <vector>
using namespace std;

struct Stack {
    vector<int> stk;
    int capacity; // maximum size of the stack

    Stack(int cap) {
        capacity = cap;
    }

    void push(int value) {
        if (stk.size() >= capacity) {
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
        if (stk.size() >= capacity)
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
    int maxSize;
    cout << "Enter maximum stack size: ";
    cin >> maxSize;

    Stack s(maxSize);
    int choice, value;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Top\n4. Display\n5. IsFull\n6. IsEmpty\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
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
