//
//  Player.hpp
//  Class
//
//  Created by Quoc Huy Nguyen on 18/2/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <iostream>
void LOL();
class Player{
public:
    int x,y;
    double speed;
    void LOG(){
        std::cout << x << std::endl;
        std::cout << y << std::endl;

        std::cout << speed << std::endl;

    }
};

#endif /* Player_hpp */
