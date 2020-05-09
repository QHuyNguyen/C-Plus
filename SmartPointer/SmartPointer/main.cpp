//
//  main.cpp
//  SmartPointer
//
//  Created by Quoc Huy Nguyen on 9/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include <memory>

class Entity{
public:
    Entity(){
        std::cout << "Created Entity!" << std::endl;
    }
    
    ~Entity(){
        std::cout << "Deleted Entity" << std::endl;
    }
    
    void Print(){
        
    }
};

int main(int argc, const char * argv[]) {
    //Create a uniquie pointer to avoid having to delete each pointer manually, but you can't reassign uniquie_ptr to a new pointer
    std::unique_ptr<Entity> entity = std::make_unique<Entity>();
    entity->Print();
    
    Entity* e = new Entity();
    e->Print();
    delete e;
    
    return 0;
}
