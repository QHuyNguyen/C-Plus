//
//  main.cpp
//  Constructor
//
//  Created by Quoc Huy Nguyen on 8/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

class Square{
public:
    int X, Y;
    Square(){
        X = 3;
        Y = 3;
        std::cout << "Created Object" << std::endl;
    }
    Square(int x, int y){
        X = x;
        Y = y;
        std::cout << "Created Object" << std::endl;

    }
    ~Square(){
        std::cout << "Destroyed Object" << std::endl;
    }
public:
    void Print(){
        std::cout << "Square area is " << X*Y << std::endl;
    };
};

int main(int argc, const char * argv[]) {
    std::cout << "Enter square length: ";
    int size;
    std::cin >> size;
    
    Square square(size, size);
    square.Print();
    
    return 0;
}
