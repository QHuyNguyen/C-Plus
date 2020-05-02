//
//  main.cpp
//  Member_Initializere
//
//  Created by Quoc Huy Nguyen on 2/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

class Entity{
private:
    std::string v_name;
public:
    Entity() : v_name("Unknown"){
    }
    
    Entity(const std::string& name) : v_name(name){
    }
    
    const std::string GetName() const{
        return v_name;
    }
};

int main(int argc, const char * argv[]) {
    Entity* e1 = new Entity();
    Entity* e2 = new Entity("Quoc Huy");
    
    std::cout << e1->GetName() << std::endl;
    std::cout << e2->GetName() << std::endl;
    
    return 0;
}
