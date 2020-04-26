//
//  main.cpp
//  VirtualFunction
//
//  Created by Quoc Huy Nguyen on 26/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include "Player.cpp"


void PrintClassName(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}

int main(int argc, const char * argv[]) {
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;
    
    Player* p = new Player("Huy");
    std::cout << p->GetName() << std::endl;
    
    Entity* entity = new Player("QUoc HUy");
    std::cout << entity->GetName() << std::endl;
    
    PrintClassName(e);
    PrintClassName(p);
    
    return 0;
}
