#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

// Template class for a Queue
template<typename T>
class Queue {
private:
    T* arr; 
    int capacity; 
    int frontIndex; 
    int rearIndex; 
    int currentSize; 

public:
    // Constructor with default queue size of 10
    Queue(int size = 10) {
        capacity = size;
        arr = new T[capacity]; // Allocate memory for the queue
        frontIndex = 0; // Front index starts at 0
        rearIndex = -1; // Rear index starts at -1 indicating the queue is empty
        currentSize = 0; // Initial size of the queue is 0
    }

    // Destructor to free the allocated memory
    ~Queue() {
        delete[] arr; // Release the allocated memory for the queue
    }

    // Function to add an element to the queue
    void push(const T& element) {
        if (currentSize == capacity) { // Check if the queue is full
            cout << "Queue is full. Cannot push more elements.\n";
            return;
        }
        rearIndex = (rearIndex + 1) % capacity; // Move rear index to the next position
        arr[rearIndex] = element; // Insert the new element at the rear
        currentSize++; // Increase the current size
    }

    // Function to remove the front element from the queue
    void pop() {
        if (currentSize == 0) { // Check if the queue is empty
            cout << "Queue is empty. Cannot pop.\n";
            return;
        }
        frontIndex = (frontIndex + 1) % capacity; // Move front index to the next position
        currentSize--; // Decrease the current size
    }

    // Function to get the front element of the queue
    T front() {
        if (currentSize == 0) { // Check if the queue is empty
            cout << "Queue is empty. No front element.\n";
            exit(EXIT_FAILURE); // Terminate the program
        }
        return arr[frontIndex]; // Return the front element
    }

    // Function to get the current size of the queue
    int size() {
        return currentSize;
    }

    // Function to check if the queue is empty
    bool empty() {
        return currentSize == 0;
    }

    // Function to move the front element to the rear of the queue
    void move_to_rear() {
        if (currentSize <= 1) { // Check if the queue has enough elements
            cout << "Queue has insufficient elements to perform move_to_rear.\n";
            return;
        }
        T temp = arr[frontIndex]; // Store the front element
        pop(); // Remove the front element
        push(temp); // Add the removed element to the rear
    }

    // Function to display all elements in the queue
    void display() {
        int count = 0;
        int index = frontIndex;
        while (count < currentSize) { // Iterate through all elements
            cout << arr[index] << " ";
            index = (index + 1) % capacity; // Move to the next index
            count++;
        }
        cout << endl;
    }
};
#endif //QUEUE_H
