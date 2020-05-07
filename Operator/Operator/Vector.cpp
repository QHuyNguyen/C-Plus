//
//  Vector.cpp
//  Operator
//
//  Created by Quoc Huy Nguyen on 7/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>
#include <iostream>

struct Vector{
    float x, y;
    
    Vector(float x, float y) : x(x), y(y){}
    
    Vector Add(Vector& other) const{
        return Vector(x + other.x, y + other.y);
    }
    
    Vector Multiply(Vector& other) const{
        return Vector(x * other.x, y * other.y);
    }
    
    Vector operator+(const Vector& other){
        return Vector(x + other.x, y + other.y);
    }
    
    Vector operator*(const Vector& other){
        return Vector(x * other.x, y * other.y);
    }
    
    bool operator==(const Vector& other) const{
        return x == other.x && y == other.y;
    }
    
    bool operator!=(const Vector& other) const{
        return !(*this == other);
    }
};
