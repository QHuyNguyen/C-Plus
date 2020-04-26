//
//  Entity.cpp
//  VirtualFunction
//
//  Created by Quoc Huy Nguyen on 26/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Printable.cpp"

class Entity : public Printable{
public:
    virtual std::string GetName(){
        return "print entity";
    }
    std::string GetClassName() override{
        return "Entity";
    }
};
