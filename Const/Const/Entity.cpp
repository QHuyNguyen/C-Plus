//
//  Entity.cpp
//  Const
//
//  Created by Quoc Huy Nguyen on 29/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class Entity{
private:
    int v_x, v_y;
public:
     int GetX() const {
        return v_x;
    }
    
     void SetX(const int& no){
        v_x = no;
    }
};
