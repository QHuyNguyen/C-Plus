//
//  Entity.cpp
//  VirtualFunction
//
//  Created by Quoc Huy Nguyen on 26/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class Entity{
public:
    virtual std::string GetName(){
        return "Entity";
    }
};
