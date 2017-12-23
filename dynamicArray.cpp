//
//  dynamicArray.cpp
//  CMPT225-Lab1
//
//  Created by Aryan Arora on 2017-12-02.
//  Copyright © 2017 Aryan Arora. All rights reserved.
//

#include <iostream>
using namespace std;
#include "dynamicArray.h"

ArrayClass:: ArrayClass(){
    this->top = -1;
    this->maxSize = 2;
    this->arr = new int [this->maxSize];
    
    for(int i = 0 ; i < this->maxSize ; i++){
        this->arr[i] = -1;
    }
}
ArrayClass:: ~ArrayClass(){
    delete [] this->arr;
}

void ArrayClass:: insert(const int &value){
    
    
    //not full
    if (this->top < this->maxSize-1){
        this->top ++;
        this->arr[this->top] = value;
        return;
    }
    //IF FULL
    else{
        int * temp = new int [this->maxSize*2];
        for (int i = 0 ; i <= this->top ; i++){
            temp[i] = this->arr[i];
        }
        temp[++this->top] = value;
        this->~ArrayClass();
        this->arr = temp;
        this->maxSize *= 2;
        
    }
    
    
    
}
    

int ArrayClass:: sum(){
    int sum = 0;
    if (this->size() == 0){
        return sum;
    }
    for (int i = 0 ; i < this->size(); i++) {
        sum = sum + this->arr[i];
    }
    return sum;
    
}

int ArrayClass:: size(){
    return this->top;
}

void ArrayClass:: printArray(){
    
    cout << "Array - ";
    for (int i = 0; i <= this->top; i++) {
        cout << this->arr[i];
//        if(this->arr[i] != -1){
//            cout << this->arr[i];
//        }
//        else{
//            cout << "(-1)";
//        }
    }
    cout << endl;
    
}

