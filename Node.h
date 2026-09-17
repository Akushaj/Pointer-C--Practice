//
// Created by AkshajKri on 9/17/26.
//

# pragma once

// the pointer inside the node is also a node type because we need it to point to another node
template <typename T>
class Node {
public:

    T *value;
    Node<T> *next;

    Node(T *value) {
        // . is belongs to and -> is to look inside the variable mainly used there is a pointer involved
        this->value = value; // (this) keyword locates where the variable is just like in java when the value name is the same
        // value = v // if the value inside the constructor is v so we dont need this

        next = nullptr;
    }

private:

};
