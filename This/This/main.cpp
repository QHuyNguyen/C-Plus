//
//  main.cpp
//  This
//
//  Created by Quoc Huy Nguyen on 9/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>



class Entity{
public:
    int x, y;
    
    Entity(int x, int y){
        this->x = x;
        this->y = y;

    }
    
    
};

void PrintMethod(const Entity& e){
    
}

int main(int argc, const char * argv[]) {
    
    int a =6;
    int*b = &a;
    
    std::cout << *b << std::endl;
    
    Entity* e = new Entity(2, 3);
    PrintMethod(*e);
    
    return 0;
}
