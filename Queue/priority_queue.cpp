#include <iostream>
using namespace std;

const int MAX = 100;

struct Node {
    int data;
    int priority;
};

Node pq[MAX];
int n = 0;

void array_insert(int i, Node x) {
    while (i > 0 && pq[i - 1].priority < x.priority) {
        pq[i] = pq[i - 1];
        i--;
    }
    pq[i] = x;
    n++;
}

void enqueue(int data, int priority) {

    if (n == MAX) {
        cout << "Priority Queue is full\n";
        return;
    }

    Node x;
    x.data = data;
    x.priority = priority;

    array_insert(n, x);
}

void dequeue() {

    if (n == 0) {
        cout << "Priority Queue is empty\n";
        return;
    }

    cout << "Deleted: " << pq[0].data << endl;

    // Shift elements to the left
    for (int i = 0; i < n - 1; i++) {
        pq[i] = pq[i + 1];
    }

    n--;
}

void display() {

    if (n == 0) {
        cout << "Priority Queue is empty\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "Data: " << pq[i].data
             << " Priority: " << pq[i].priority << endl;
    }
}

int main() {

    enqueue(10, 2);
    enqueue(20, 5);
    enqueue(30, 1);
    enqueue(40, 4);

    cout << "Priority Queue:\n";
    display();

    cout << "\n";
    dequeue();

    cout << "\nAfter Dequeue:\n";
    display();

    return 0;
}