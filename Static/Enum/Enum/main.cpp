//
//  main.cpp
//  Enum
//
//  Created by Quoc Huy Nguyen on 8/3/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>

class Log{
public:
    enum Level{
        Error = 0, Warning, Info
    };
private:
    Level m_logLevel = Error;
public:
    void SetLevel(Level level){
        m_logLevel = level;
    };
    
    void PrintError(const char* message){
        if(m_logLevel == Error){
            std::cout << message << std::endl;
        };
    };
    
    void PrintWarning(const char* message){
        if(m_logLevel <= Warning){
            std::cout << message << std::endl;
        };
    };
    
    void PrintInfo(const char* message){
        if(m_logLevel <= Info){
            std::cout << message << std::endl;
        };
    };
};

int main(int argc, const char * argv[]) {

    Log log;
    log.SetLevel(Log::Error);
    log.PrintError("Error");
    log.PrintWarning("Warning");
    log.PrintInfo("Info");
    
    return 0;
}
