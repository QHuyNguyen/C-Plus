//
//  main.cpp
//  CopyConstructor
//
//  Created by Quoc Huy Nguyen on 9/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include <memory>

class String{
private:
    std::unique_ptr<char*> m_Buffer;
    unsigned int m_size;
public:
    String(const char* string){
        m_size = strlen(string);
        m_Buffer = std::make_unique<char*>();
        /*for(int i = 0; i < m_size; i++){
            m_Buffer[i] = string[i];
        }*/
        memcpy(*m_Buffer, string, m_size);
    }
    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string){
    stream << string.m_Buffer;
    return stream;
}

int main(int argc, const char * argv[]) {
    String string = "Huy";
    std::cout << string << std::endl;
    return 0;
}
