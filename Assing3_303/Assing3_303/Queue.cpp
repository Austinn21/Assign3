#include "Queue.h"

template<typename T>
Queue<T>::Queue(int size) {
    capacity = size;
    arr = new T[capacity];
    frontIndex = 0;
    rearIndex = -1;
    currentSize = 0;
}

template<typename T>
Queue<T>::~Queue() {
    delete[] arr;
}

template<typename T>
void Queue<T>::push(const T& element) {
    if (currentSize == capacity) {
        std::cerr << "Queue is full. Cannot push more elements.\n";
        return;
    }
    rearIndex = (rearIndex + 1) % capacity;
    arr[rearIndex] = element;
    currentSize++;
}

template<typename T>
void Queue<T>::pop() {
    if (currentSize == 0) {
        std::cerr << "Queue is empty. Cannot pop.\n";
        return;
    }
    frontIndex = (frontIndex + 1) % capacity;
    currentSize--;
}

template<typename T>
T Queue<T>::front() {
    if (currentSize == 0) {
        std::cerr << "Queue is empty. No front element.\n";
        exit(EXIT_FAILURE);
    }
    return arr[frontIndex];
}

template<typename T>
int Queue<T>::size() {
    return currentSize;
}

template<typename T>
bool Queue<T>::empty() {
    return currentSize == 0;
}

template<typename T>
void Queue<T>::move_to_rear() {
    if (currentSize <= 1) {
        std::cerr << "Queue has insufficient elements to perform move_to_rear.\n";
        return;
    }
    T temp = arr[frontIndex];
    pop();
    push(temp);
}

template<typename T>
void Queue<T>::display() {
    int count = 0;
    int index = frontIndex;
    while (count < currentSize) {
        std::cout << arr[index] << " ";
        index = (index + 1) % capacity;
        count++;
    }
    std::cout << std::endl;
}
