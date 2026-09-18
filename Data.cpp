//
// Created by AkshajKri on 9/17/26.
//

#include<iostream>
#include "Data.h"
using namespace std;

class Data {
public:
    int numID;
    string name;

    Data(int numID, string name) {
        this-> numID = numID;
        this-> name = name;
    }
    void print() {
       cout<<numID<<" " << name<<endl;
    }
};
