//
//  Shape.cpp
//  Revision_Test
//
//  Created by Quoc Huy Nguyen on 30/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#pragma once

class Shape{
protected:
    mutable int length, width;
public:
    Shape(int l, int w){
        length = l;
        width = w;
    }
    
    //virtual ~Shape() = 0;
    
    virtual int GetLength() const = 0;
    virtual int GetWidth() const = 0;
    virtual int Area() = 0;
};
