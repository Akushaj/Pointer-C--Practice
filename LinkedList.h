//
// Created by AkshajKri on 9/17/26.
//

#pragma once
#include "Node.h"

template<typename T>
class LinkedList {
public:
    Node<T> *head;
    Node<T> *tail;
    int size;

    // We are doing overloading where we can use the same name for constructor but have different values in the parameters
    // Tress and Graph are non empty data structures and they are sister data structures
    LinkedList(T *value) { // have at least one value when creating a linked list
        Node<T> *temp = new Node<T>(value);
        head = temp;
        tail = temp;
        size = 1;
    }
    LinkedList() { // if you want a empty linkedList constructor
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    void print() {
        Node<T> *temp1 = head;
         while (temp1 != nullptr) {
             temp1->print();
             temp1 = temp1->next; // never move the head pointer cause we can't loose it so we assigne it to a temporary pointer
         }
    }

    void append(T *value) { // adding to the last of the list
        Node<T> *newNode = new Node<T>(value); // taking the value and covering it with a Node, calls a node constructor and always point to null cause
        if (head == nullptr) {
            head = newNode;
            size++; // increase the size of the linkedList
            return;
        }
        // Node<T> *temp = head;
        // while (temp->next != nullptr) { // temp ends up one before the last one which is the null pointer and you dont want anything to be at null pointer cause u will lose track of where you came from
        //     temp = temp->next;
        // }

        tail->next = newNode; //it becomes O(1) when we add tail but if we only use head and not tail then
        tail = tail->next; // tail=newnode
        // the link to null pointer is broken and it will point to newNode
        size++; // increase the size of the linkedlist
    }
    // add delete at the end hmmm
};
