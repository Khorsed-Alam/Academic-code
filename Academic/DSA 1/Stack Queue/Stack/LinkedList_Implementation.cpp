 #include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed into stack." << endl;
}

int pop() {
    if (top == NULL) {
        cout << "Stack Underflow!" << endl;
        return -1;
    } else {
        int poppedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return poppedValue;
    }
}

int peek() {
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
        return -1;
    } else {
        return top->data;
    }
}

void display() {
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack elements: ";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

bool isEmpty() {
    return top == NULL;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    cout << "Top element: " << peek() << endl;
    cout << "Popped: " << pop() << endl;
    display();
    cout << "Is stack empty? " << (isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
