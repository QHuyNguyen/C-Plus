//
//  main.cpp
//  Class
//
//  Created by Quoc Huy Nguyen on 18/2/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//



#include <iostream>
#include "Player.hpp"

class Log{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:
    int m_LogLevel = LogLevelInfo;
public:
    void SetLevel(int level){
        m_LogLevel = level;
    }
    
    void Error(const char* message){
        if(m_LogLevel >= LogLevelError)
            std::cout << "[ERROR:] " << message << std::endl;
    }
    void Warning(const char* message){
        if(m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING:] " << message << std::endl;
    }
    void Info(const char* message){
        if(m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO:] " << message << std::endl;
    }
};

extern int s_Variable;

int main(int argc, const char * argv[]) {
    /*Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Error("HELLO");
    log.Warning("HELLO");
    log.Info("HELLO");
     */

    std::cout << s_Variable << std::endl;
    
    /*Player player;
    player.x = 10;
    player.y = 10;
    player.speed = 5.0f;
    player.LOG();
    LOL();*/
    return 0;
}
