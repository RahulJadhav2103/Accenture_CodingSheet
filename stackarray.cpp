#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;       // Array to store stack elements
    int top;        // Index of the top element
    int capacity;   // Maximum capacity of the stack

public:
    // Constructor to initialize the stack
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;   // Stack is initially empty
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Function to add an element to the stack
    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack overflow! Cannot push " << value << endl;
            return;
        }
        arr[++top] = value;
    }

    // Function to remove the top element from the stack
    int pop() {
        if (top == -1) {
            cout << "Stack underflow! Cannot pop an element." << endl;
            return -1;
        }
        return arr[top--];
    }

    // Function to return the top element of the stack
    int peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to get the current size of the stack
    int size() {
        return top + 1;
    }
};

int main() {
    Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl;
    cout << "Stack size is: " << stack.size() << endl;

    stack.pop();
    stack.pop();

    cout << "After popping, top element is: " << stack.peek() << endl;

    stack.push(40);
    cout << "After pushing, top element is: " << stack.peek() << endl;

    return 0;
}
