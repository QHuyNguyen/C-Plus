//
//  main.cpp
//  Pointer
//
//  Created by Quoc Huy Nguyen on 5/2/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

void Increment(int& a){
    a++;
}

int main(int argc, const char * argv[]) {
    int a = 5;
    int& ref = a;
    int* pointer = &ref;
    ref++;
    
    Increment(*pointer);

    std::cout << a << std::endl;
    //std::cout << ref << std::endl;



    



    
    
    
    
    
    /*int a = 8;
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    
    int* pointer = &a;
    *pointer = 10;
    std::cout << pointer << std::endl;
    std::cout << *pointer << std::endl;
    
    char* buffer = new char[8];
    memset(buffer, 2, 8);
    std::cout << &buffer << std::endl;
    delete[] buffer;
     
    int u = 9;
    std::cout << "Before change" << std::endl;
    std::cout << u << std::endl;
    std::cout << &u << std::endl;
    std::cout << "After change" << std::endl;
    int* y = &u;
    std::cout << *y << std::endl;
    *y = 10;
    std::cout << &u << std::endl;

    std::cout << u << std::endl;*/
    
    return 0;
}
