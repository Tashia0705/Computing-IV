// Copyright 2021 Tashia Boddu
#include "CircularBuffer.h"
#include <stdexcept>  // std::invalid_arg


CircularBuffer::CircularBuffer(int _capacity) {
    if (_capacity < 1) {
        throw invalid_argument("CircularBuffer constructor: capacity must be greater than zero");
    }
    capacity = _capacity;
    _size = 0;
    rearIndex = 0;
    frontIndex = 0;
    queue = new int16_t[capacity];
}

CircularBuffer::~CircularBuffer() {
    delete[] queue;
}

int CircularBuffer::size() {
    return _size;
}

bool CircularBuffer::isEmpty() {
    if (_size == 0) {
        return true;
    }
    return false;
}

bool CircularBuffer::isFull() {
    if (_size == capacity) {
        return true;
    } else
        return false; 
}

void CircularBuffer::enqueue(int16_t x) {
    if (_size == capacity) {
        throw runtime_error("Can't enqueue to a full ring");
    }
    queue[rearIndex] = x;
    rearIndex++;
    _size++;
} 

int16_t CircularBuffer::dequeue() {
    if (_size == 0) {
        throw runtime_error("Can't dequeue from an empty ring");
    }
    queue[frontIndex] = 0;
    frontIndex++;
    _size--;
    return queue[frontIndex];
}

int16_t CircularBuffer::peek() {
    if (_size == 0) {
        throw runtime_error("Can't peek from an empty ring");
    }
    return queue[frontIndex];
}
