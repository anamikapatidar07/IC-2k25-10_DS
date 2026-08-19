#include <iostream>
using namespace std;

#define MAX 5

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Deleted: " << arr[top--] << endl;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Top Element: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Stack Elements: ";
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
    s.peek();

    s.pop();
    s.display();

    return 0;
}

// OUTPUT
// Stack Elements: 30 20 10
// Top Element: 30
// Deleted: 30
// Stack Elements: 20 10

