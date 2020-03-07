//
//  main.cpp
//  Static
//
//  Created by Quoc Huy Nguyen on 8/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

void Function(){
    static int number = 0;
    number++;
    std::cout << number << std::endl;
};


int main(int argc, const char * argv[]) {
    Function();
    Function();
    Function();
    Function();
    Function();
    return 0;
}
