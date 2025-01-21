#include<iostream>
using namespace std;

class cq {
    public:
    int front = -1, rear = -1, a[5];

    void insert() {
        int ele;
        cout << "Enqueue: ";
        cin >> ele;
        if ((rear + 1) % (sizeof(a) / sizeof(a[0])) == front) {
            cout << "Queue is full. Cannot insert " << ele << endl;
            return;
        }
        if (front == -1) { 
            front = 0; 
        }
        rear = (rear + 1) % (sizeof(a) / sizeof(a[0]));
        a[rear] = ele;
        cout << ele << " inserted into the queue." << endl;
    }

    void deleteQueue() {
        if (front == -1) {
            cout << "Queue is empty. Cannot delete." << endl;
            return;
        }
        cout << "Dequeued: " << a[front] << endl;
        if (front == rear) {
            front = rear = -1; // Reset to initial state
        } else {
            front = (front + 1) % (sizeof(a) / sizeof(a[0]));
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << a[i] << " ";
            if (i == rear) break;
            i = (i + 1) % (sizeof(a) / sizeof(a[0]));
        }
        cout << endl;
    }
};

int main() {
    cq queue;
    int choice;
    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: queue.insert(); break;
            case 2: queue.deleteQueue(); break;
            case 3: queue.display(); break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
