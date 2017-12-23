//
//  main.cpp
//  CMPT225-Lab1
//
//  Created by Aryan Arora on 2017-12-02.
//  Copyright © 2017 Aryan Arora. All rights reserved.
//

#include <iostream>
using namespace std;
#include "dynamicArray.h"

int main() {
    
    ArrayClass a1;
    a1.printArray();
    int x = 5;
    a1.insert(x);
    
    for (int i = 0 ; i < 10 ; i++){
        a1.insert(i);
    }
    a1.printArray();
    
    cout << "this is awesoem";
    
    
    
    
    return 0;
}
