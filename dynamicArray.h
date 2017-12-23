//
//  dynamicArray.hpp
//  CMPT225-Lab1
//
//  Created by Aryan Arora on 2017-12-02.
//  Copyright © 2017 Aryan Arora. All rights reserved.
//

#pragma once
class ArrayClass
{
    
private:
    int* arr;
    int top;
    int maxSize;
    
public:
    ArrayClass();
    ~ArrayClass();
    void insert(const int &value);
    int sum();
    int size();
    void printArray();
    

};
