//
//  main.cpp
//  Inheritance
//
//  Created by Quoc Huy Nguyen on 9/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

class Entity{
public:
    int X, Y;
    
    void Move(int xa, int ya){
        X += xa;
        Y += ya;
    }
};

class Person : public Entity{
public:
    const char* Name;
    
    void PrintLocation(){
        std::cout << Name << "'s Location: " << X << ", " << Y << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    
    Person p;
    p.Name = "Huy";
    p.Move(10, 20);
    p.PrintLocation();
    
    return 0;
}
