//
//  main.cpp
//  String
//
//  Created by Quoc Huy Nguyen on 29/4/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    const char* name = "Quoc Huy";
    
   /* const wchar_t* name2 = L"Quoc Huy";
    const char16_t* name3 = u"Quoc Huy";
    const char32_t* name4 = U"Quoc Huy";*/
    
    char abc[] = "Quoc";
    abc[2] = 'x';
    
    std::cout << abc << std::endl;
    
    std::cout << strlen(name) << std::endl;
    return 0;
}
