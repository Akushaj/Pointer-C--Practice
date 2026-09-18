//
// Created by AkshajKri on 9/17/26.
//

#pragma once
template<typename T>
class LinkedList {
public:
    Node<T> *head;
    // Node<T> *tail;
    int size;

    // We are doing overloading where we can use the same name for constructor but have different values in the parameters
    // Tress and Graph are non empty data structures and they are sister data structures
    LinkedList(T *value) { // have at least one value when creating a linked list
        Node<T> *temp = new Node<T>(value);
        head = temp;
        size = 1;
    }
    LinkedList() { // if you want a empty linkedList constructor
        head = nullptr;
        size = 0;
    }
    void print() {
        Node<T> *temp1 = head;
         while (temp1 != nullptr) {
             cout << temp1->print()<< endl;
             temp1 = temp1->next; // never move the head pointer cause we can't loose it so we assigne it to a temporary pointer
         }
    }
};
