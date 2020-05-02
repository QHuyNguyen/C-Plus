//
//  main.cpp
//  Ternary Operators
//
//  Created by Quoc Huy Nguyen on 2/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int v_no1 = 5, v_no2;
    
    v_no2 = v_no1 > 10 ? 10 : 15;
    std::cout << v_no2 << std::endl;
    
    std::string rank = v_no2 > 14 ? "Expert" : "Beginer";
    std::cout << rank << std::endl;
    
    int lmao = v_no1 > 4 ? v_no2 > 12 ? rank == "Beginer"? 20 : 10 : 5 : 1;
    std::cout << lmao << std::endl;
    
    return 0;
}
