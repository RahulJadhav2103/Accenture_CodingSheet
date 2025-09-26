#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;       // Array to store queue elements
    int capacity;   // Maximum capacity of the queue
    int frontIndex; // Index of the front element
    int rearIndex;  // Index of the rear element
    int count;      // Current size of the queue

public:
    // Constructor to initialize the queue
    Queue(int size) {
        arr = new int[size];
        capacity = size;
        frontIndex = 0;
        rearIndex = -1;
        count = 0;
    }

    // Destructor to free allocated memory
    ~Queue() {
        delete[] arr;
    }

    // Function to add an element to the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue overflow! Cannot enqueue " << value << endl;
            return;
        }
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = value;
        count++;
    }

    // Function to remove the front element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow! Cannot dequeue an element." << endl;
            return -1;
        }
        int result = arr[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        count--;
        return result;
    }

    // Function to get the front element of the queue
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[frontIndex];
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return count == 0;
    }

    // Function to check if the queue is full
    bool isFull() {
        return count == capacity;
    }

    // Function to get the current size of the queue
    int size() {
        return count;
    }
};

int main() {
    Queue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);

    cout << "Front element is: " << queue.front() << endl;
    cout << "Queue size is: " << queue.size() << endl;

    queue.dequeue();
    cout << "After dequeue, front element is: " << queue.front() << endl;

    queue.enqueue(50);
    queue.enqueue(60);

    cout << "After enqueuing more elements, front element is: " << queue.front() << endl;
    cout << "Queue size is: " << queue.size() << endl;

    return 0;
}
