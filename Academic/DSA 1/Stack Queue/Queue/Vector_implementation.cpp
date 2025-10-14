#include <iostream>
#include <vector>
using namespace std;

struct Queue {
    vector<int> q;

    void enqueue(int value) {
        q.push_back(value);
        cout << value << " enqueued into queue." << endl;
    }

    void dequeue() {
        if (q.empty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        cout << q.front() << " dequeued from queue." << endl;
        q.erase(q.begin());
    }

    void front() {
        if (q.empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Front element: " << q.front() << endl;
    }

    void rear() {
        if (q.empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Rear element: " << q.back() << endl;
    }

    void size() {
        cout << "Queue size: " << q.size() << endl;
    }

    void isEmpty() {
        if (q.empty())
            cout << "Queue is empty." << endl;
        else
            cout << "Queue is not empty." << endl;
    }

    void display() {
        if (q.empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements (front to rear): ";
        for (int i = 0; i < q.size(); i++)
            cout << q[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Front\n4. Rear\n5. Display\n6. Size\n7. Is Empty\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.front();
                break;

            case 4:
                q.rear();
                break;

            case 5:
                q.display();
                break;

            case 6:
                q.size();
                break;

            case 7:
                q.isEmpty();
                break;

            case 0:
                cout << "Exiting program." << endl;
                return 0;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}
