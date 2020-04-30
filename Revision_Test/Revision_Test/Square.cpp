//
//  Square.cpp
//  Revision_Test
//
//  Created by Quoc Huy Nguyen on 30/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <stdio.h>
#include "Shape.cpp"

class Square : public Shape{
    private:
        std::string message;
    public:
        Square(int x, int y, std::string m) : Shape(x, y), message(m){
        }
        
        int GetLength() const override{
            return length;
        }
        
        int GetWidth() const override{
            return width;
        }
        
        int Area() override{
            return length * width;
        }
        
        void DisplayMessage(){
            std::cout << message << std::endl;
        }
};
