//
//  main.cpp
//  Mutable
//
//  Created by Quoc Huy Nguyen on 29/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

class Entity{
private:
    std::string v_name;
    //Mutable allow variable to be changed and update inside const method
    mutable int v_number = 0;
public:
    const std::string& GetName() const{
        v_number = 10;
        return v_name;
    }
};


int main(int argc, const char * argv[]) {
    //If the Entity object is const, its method has to also be const
    const Entity e;
    std::cout << e.GetName() << std::endl;
    return 0;
}
