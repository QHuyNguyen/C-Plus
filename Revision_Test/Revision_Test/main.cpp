//
//  main.cpp
//  Revision_Test
//
//  Created by Quoc Huy Nguyen on 30/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include "Rectangle.cpp"
#include "Square.cpp"

void ListOfArray(int index, Shape& obj){
    int v_area_list[2];
    v_area_list[index] = obj.Area();
    std::cout << "Area: " << v_area_list[index] << std::endl;
}

int main(int argc, const char * argv[]) {
    
    //Rectangle rec(5, 10, "Hello first time");
    //Square sqr(12, 12, "Hello second time");
    Rectangle* rec = new Rectangle(5, 10, "Hello first time");
    Square* sqr = new Square(12, 12, "Hello second time");
    
    std::cout << rec->GetLength() << std::endl;
    
    ListOfArray(0, *rec);
    ListOfArray(1, *sqr);
    
    
    rec->DisplayMessage();
    sqr->DisplayMessage();
    
    return 0;
}
