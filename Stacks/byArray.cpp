#include <iostream>
using namespace std;

#define MAX 5

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Push
    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = value;

        cout << value << " pushed into stack" << endl;
    }

    // Pop
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << arr[top] << " popped from stack" << endl;
        top--;
    }

    // Peek
    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    // Display
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack: ";

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
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