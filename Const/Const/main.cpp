//
//  main.cpp
//  Const
//
//  Created by Quoc Huy Nguyen on 29/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include "Entity.cpp"

//If you pass in a reference object, you can only access const method
void PrintEntity(const Entity& e){
    std::cout << e.GetX() << std::endl;
};

int main(int argc, const char * argv[]) {
    const int a = 2;
    
    //if const is in front e.g. const int* abc, it mean the content of abc (*abc) cant be modified, but the pointer can point to something else
   
    const int* b = new int;
    int c = 4;
    
    b = &a;
    b = &c;
    //*b = 5; cant assignt new value to pointer if const is in front
    
    //if const is not in front e.g. int* const abc, it mean the pointer can't be modified but the content can
    int* const abc = new int;
    *abc = 10;
    //abc = &a; cant switch pointer to new value since const is not in front
    
    const int*  d = new int;
    d = &c;
    
    Entity e;
    e.SetX(*d);
    PrintEntity(e);

    return 0;
}
