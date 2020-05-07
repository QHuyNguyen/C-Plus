//
//  main.cpp
//  Operator
//
//  Created by Quoc Huy Nguyen on 7/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include "Vector.cpp"

std::ostream& operator<<(std::ostream& stream, const Vector& other){
    stream << other.x << ", " << other.y;
    return stream;
};

int main(int argc, const char * argv[]) {
    
    Vector a(1, 2);
    Vector b(3, 4);
    Vector c(5, 6);
    
    Vector result = a.Add(b);
    //Vector anotherResult = a.Add(b.Multiply(c));
    Vector result2 = a.Multiply(c);
    
    
    float x = result.x;
    float y = result.y;
    float i = result2.x;
    float o = result2.y;
    
    std::cout << x << ", " << y << std::endl;
    std::cout << i << ", " << o << std::endl;
    
    std::cout << "-------" << std::endl;
    Vector opResult = a + b;
    Vector opResult2 = a +b * c;
    std::cout << opResult << ", " << opResult << std::endl;
    std::cout << opResult2 << ", " << opResult2 << std::endl;
    
    if(opResult2 == opResult)
    std::cout << "True" << std::endl;
    
    if(opResult2 != opResult)
    std::cout << "False" << std::endl;
    
    return 0;
}
