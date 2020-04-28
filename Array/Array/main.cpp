//
//  main.cpp
//  Array
//
//  Created by Quoc Huy Nguyen on 28/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int example[5];
    
    
    for(int i = 0; i < sizeof(example)/sizeof(int); i++){
        example[i] = i*i;
    }
    
    //example is a pointer
    int * a = example;
    int b = example[2];
    
    //a + 2 is essentially a[2] as it is not increase in value but placement instead
    //* dereference it to give actual value
    *(a + 2) = 23123;
    
    for(int i = 0; i < sizeof(example)/sizeof(int); i++){
        std::cout << example[i] << std::endl;
    }
    
    std::cout << a[2] << std::endl;
    std::cout << *a << std::endl;
    std::cout << b << std::endl;
    std::cout << "Length of the array: " << sizeof(example)/sizeof(int) << std::endl;
    
    return 0;
}
