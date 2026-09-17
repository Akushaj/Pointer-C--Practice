//
// Created by AkshajKri on 9/15/26.
//

# pragma once

#include <iostream>
using namespace std;

template <typename T>
class ArrayList {
public:
    ArrayList():size(0) {

    }
    void add(T item) { // add from the front
        if (size >= CAPACITY) {
            cout<< "Array is full" << endl;
            return;
        }
        for (int i = size ; i > 0 ; i--) { // for an un-ordered array the time complexity will be O(n) cause it hast to shift every n element to the right.
            data[i] = data[i-1];
        }
        data[0] = item;
        size++;
            //data[size++] = item;
    }
    void deleteFront() { // O(n) as shifting is the main elements that's taking the most time.
        if (size == 0) {
            cout<< "Array is empty" << endl;
            return;
        }
        for (int i = 0 ; i < size-1 ; i++) {
            data[i] = data[i+1];
        }
        size--;
    }
    bool search(T item) { // O(n) searching through every element n of the array
        if (size == 0 ) {
            cout << "Array is Empty" << endl;
            return false;
        }
        for(int i = 0 ; i < size ; i++) {
            if (data[i] == item) {
                return true;
            }
        }
        return false;
    }
    void printArray() {
        for (int i = 0; i < size ; i++) {
            cout << data[i] << ",";
        }
        cout<<endl;
    }


    // Added a methods to add from the back and delete from the back.

    void addToBack(T item) { // O(1)
        if (size >= CAPACITY) {
            cout<< "Array is Full" << endl;
            return;
        }
        data[size] = item;
        size++;
    }
    void deleteBack() { // O(1)
        if (size == 0) {
            cout<< "Array is Empty" << endl;
            return;
        }
        size--;
    }

private:
    static const int CAPACITY = 20;
    T data[CAPACITY];
    int size;
};
