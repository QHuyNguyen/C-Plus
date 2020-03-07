#include <iostream>
#include "Log.h"
#include "Division.hpp"


int Multiply(int a, int b){
    Print("Printed");
    return a * b;
}

int main(){
    //std::cout << Multiply(5, 8) << std::endl;
    unsigned int number = 4000000000;
    bool condition = true;
    if(!condition){
        if(number%2==0){
            std::cout << Divide(10, 2) << std::endl;
            std::cout << number << std::endl;
        }
        else
            std::cout << "Condition not fulfilled" << std::endl;
    }
    
    for(int i = 0; i < 6; i++){
        if(i > 4)
            continue;
        std::cout << "Hello World" << std::endl;
        std::cout << i << std::endl;
    }
    
    
    std::cin.get();

}
