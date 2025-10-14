#include <iostream>
#include <vector>
using namespace std;

struct Stack {
    vector<int> stk;

    void push(int value) {
        stk.push_back(value);
        cout << value << " pushed into stack." << endl;
    }

    void pop() {
        if (stk.empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        cout << stk.back() << " popped from stack." << endl;
        stk.pop_back();
    }

    void top() {
        if (stk.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Top element: " << stk.back() << endl;
    }

    void size() {
        cout << "Stack size: " << stk.size() << endl;
    }

    void isEmpty() {
        if (stk.empty())
            cout << "Stack is empty." << endl;
        else
            cout << "Stack is not empty." << endl;
    }

    void display() {
        if (stk.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = stk.size() - 1; i >= 0; i--)
            cout << stk[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Top\n4. Display\n5. Size\n6. Is Empty\n0. Exit\n";
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
                s.size();
                break;

            case 6:
                s.isEmpty();
                break;

            case 0:
                cout << "Exiting program." << endl;
                return 0;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}
