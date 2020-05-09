//
//  main.cpp
//  ArrowOperator
//
//  Created by Quoc Huy Nguyen on 9/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

class Entity{
public:
    void Print(){
        std::cout << "Hello" << std::endl;
    }
};

class ScopePtr{
public:
    Entity* e_obj;
    ScopePtr(Entity* e) : e_obj(e){
        
    }
    
    ~ScopePtr(){
        std::cout << "Deleted ScopePtr" << std::endl;
        delete e_obj;
    }
    
    Entity* GetObj(){
        return e_obj;
    }
    
    Entity* operator->(){
        return e_obj;
    }
};

int main(int argc, const char * argv[]) {
    Entity random;
    
    std::unique_ptr<Entity> e = std::make_unique<Entity>();
    random = *e;
    random.Print();
    (*e).Print();
    
    ScopePtr scope = new Entity();
    //scope.GetObj()->Print();
    scope->Print();
    
    
    return 0;
}
