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
    
    virtual std::string GetName(){
        return "Entity";
    }
};

class Person : public Entity{
public:
    std::string Name;
    
    Person(const std::string& name) : Name(name){
        
    }
    
    void PrintLocation(){
        std::cout << Name << "'s Location: " << X << ", " << Y << std::endl;
    }
    
    std::string GetName() override {
        return Name;
    }
};

void PrintName(Entity* e){
    std::cout << e->GetName() << std::endl;
}

int main(int argc, const char * argv[]) {
    
    Entity* e = new Entity();
    Person* p = new Person("Huy");
    
    PrintName(e);
    PrintName(p);
    
    /*p.Name = "Huy";
    p.Move(10, 20);
    p.PrintLocation();*/
    
    return 0;
}
