// Copyright 2021 Tashia Boddu
#include "CircularBuffer.h" 
#include <stdexcept> //std::invalid_arg
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Main
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(constructor) {
    // exception should not be thrown 
    BOOST_REQUIRE_NO_THROW(CircularBuffer(10)); 
    BOOST_REQUIRE_NO_THROW(CircularBuffer(24)); 

    // excepion should be thrown 
    BOOST_REQUIRE_THROW(CircularBuffer(-4), invalid_argument); 
    BOOST_REQUIRE_THROW(CircularBuffer(0), invalid_argument); 
}

BOOST_AUTO_TEST_CASE(size) {
    // size is 0 b/c nothing's in the array
    CircularBuffer CB(6); 
    BOOST_REQUIRE(CB.size() == 0); 

    // size should be 2 b/c two elements were added to array
    CB.enqueue(4);
    CB.enqueue(7); 
    BOOST_REQUIRE(CB.size() == 2);

    // size should be 1 b/c an element was removed from array
    CB.dequeue(); 
    BOOST_REQUIRE(CB.size() == 1);  
}

BOOST_AUTO_TEST_CASE(enqueue) {
    // exception should not be thrown bc queue is yet to be full
    CircularBuffer cb(6); 
    for(int i = 0; i < 6; i++) {
        BOOST_REQUIRE_NO_THROW(cb.enqueue(i)); 
    }
    // exception should be thrown bc cannot enqueue to full queue 
    BOOST_REQUIRE_THROW(cb.enqueue(6), runtime_error); 
}

BOOST_AUTO_TEST_CASE(dequeue) {
    CircularBuffer CB(1); 
    CB.enqueue(1);  
    
    // excetion should not be thrown b/c array is not empty 
    BOOST_REQUIRE_NO_THROW(CB.dequeue()); 

    // excetion should be thrown b/c array is empty
    BOOST_REQUIRE_THROW(CB.dequeue(), runtime_error); 
}

BOOST_AUTO_TEST_CASE(isEmpty) {
    // should return true b/c noting is in the array 
    CircularBuffer cb(20); 
    BOOST_REQUIRE(cb.isEmpty() == true); 

    // should return false bc there are elemets in the array 
    CircularBuffer Cb(4);
    Cb.enqueue(2);
    BOOST_REQUIRE(Cb.isEmpty() == false); 
}

BOOST_AUTO_TEST_CASE(isFull) {
    // should return true since the queue is full 
    CircularBuffer CB(2);
    CB.enqueue(2);
    CB.enqueue(240); 
    BOOST_REQUIRE(CB.isFull() == true); 

    // should return false since queue is not full
    CircularBuffer cB(10); 
    for(int i = 0; i < 6; i++) {
        cB.enqueue(i); 
    }
    BOOST_REQUIRE(cB.isFull() == false); 
}

BOOST_AUTO_TEST_CASE(peek) {
    // exception should not be thrown if array is not empty 
    CircularBuffer cb(4); 
    cb.enqueue(20);
    cb.enqueue(24); 
    BOOST_REQUIRE(cb.peek() == 20); 
    cb.dequeue(); 
    BOOST_REQUIRE(cb.peek() == 24);

    // exception should be thrown b/c array is empty
    CircularBuffer Cb(26);
    BOOST_REQUIRE_THROW(Cb.peek(), runtime_error); 
}
