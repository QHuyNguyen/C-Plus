//
//  Player.cpp
//  VirtualFunction
//
//  Created by Quoc Huy Nguyen on 26/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Entity.cpp"

class Player : public Entity{
private:
    std::string v_name;
public:
    Player(const std::string& name) : v_name(name){
        
    }
    
    std::string GetName() override {
        return v_name;
    }
    
    std::string GetClassName() override {
        return "Player";
    }
};
