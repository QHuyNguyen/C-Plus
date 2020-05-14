//
//  main.cpp
//  Revision_Test2
//
//  Created by Quoc Huy Nguyen on 13/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include <memory>
#include <vector>

struct Entity{

    std::string v_name;
    int v_number;

    Entity(int p_number) : v_name("Huy"), v_number(p_number) {};
    
    ~Entity(){
        std::cout << "Delete object" << std::endl;
    }
    
    const std::string& GetName() const{
        return v_name;
    }
    
    int operator+ (const Entity& b){
        int c = v_number + b.v_number;
        return c;
    }
    
    Entity operator-(const Entity& b){
        return Entity(v_number - b.v_number);
    }
    
    Entity operator*(const Entity& b){
        return Entity(v_number * b.v_number);
    }
    
    bool operator==(const Entity& other){
        return v_number==other.v_number;
    }
    bool operator!=(const Entity& other){
        return v_number!=other.v_number;
    }
};

std::ostream& operator<<(std::ostream& st, const Entity& other){
    st << other.v_number;
    return st;
};

int main(int argc, const char * argv[]) {
    
    Entity a(200);
    Entity b(10);
    Entity c(2);
    
    Entity* d = new Entity(1);
    std::unique_ptr<Entity> entity(new Entity(2));
    
    std::vector<Entity> v_entity;
    v_entity.push_back(a);
    v_entity.push_back(b);
    v_entity.push_back(c);
    v_entity.push_back({20});
    std::cout << "Vector printing" << std::endl;
    for(Entity e : v_entity){
        
        std::cout << e.v_number << std::endl;
    }
    
    Entity result = a - b * c - *entity;
    
    bool result2 = a!=b;
    
    std::cout << a+b << std::endl;
    std::cout << result << std::endl;
    std::cout << result2 << std::endl;

    
    return 0;
}
