#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

template<typename T>
class Queue {
private:
    T* arr;
    int capacity;
    int frontIndex;
    int rearIndex;
    int currentSize;

public:
    Queue(int size = 10);

    ~Queue();

    void push(const T& element);

    void pop();

    T front();

    int size();

    bool empty();

    void move_to_rear();

    void display();
};

#include "Queue.cpp"

#endif // QUEUE_H

