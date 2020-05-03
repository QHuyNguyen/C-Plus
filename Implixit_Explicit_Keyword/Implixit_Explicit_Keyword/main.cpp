//
//  main.cpp
//  Implixit_Explicit_Keyword
//
//  Created by Quoc Huy Nguyen on 3/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

class Entity{
private:
    std::string v_name;
    int v_age;
public:
    Entity(std::string name) : v_name(name), v_age(-1){}
    Entity(int age) : v_name("Unknown"), v_age(age){}
    
    const int GetAge() const{
        return v_age;
    }
    const std::string GetName() const{
        return v_name;
    }
};

void PrintEntity(const Entity& e){
    std::cout << e.GetAge() << std::endl;
    std::cout << e.GetName() << std::endl;
}

int main(int argc, const char * argv[]) {
    
    //Entity a("Quoc Huy");
    //Entity b(27);
    Entity a = std::string("Quoc Huy");
    Entity b = 27;
    
    PrintEntity(27);
    PrintEntity(std::string("Quoc Huy"));
    return 0;
}
