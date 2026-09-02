#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    
    void push(int value) {
        Node* newNode = new Node(value);

        newNode->next = top;
        top = newNode;

        cout << value << " " << endl;
    }

    
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow" << endl;
            return;
        }

        Node* temp = top;

        cout << top->data << " popped from stack" << endl;

        top = top->next;
        delete temp;
    }

    
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element: " << top->data << endl;
        }
    }

    
    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = top;

        cout << "Stack: ";

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();

    s.peek();

    return 0;
}