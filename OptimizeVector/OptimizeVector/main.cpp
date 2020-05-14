//
//  main.cpp
//  OptimizeVector
//
//  Created by Quoc Huy Nguyen on 14/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include <vector>

struct Vertex{
    float x, y, z;
    
    Vertex(int p_x, int p_y, int p_z) : x(p_x), y(p_y), z(p_z){
    }
    
    Vertex(const Vertex& v) : x(v.x), y(v.y), z(v.z){
        std::cout << "Copied!" << std::endl;
    };
};

int main(int argc, const char * argv[]) {
    std::vector<Vertex> v_vertices;
    v_vertices.reserve(3);
    /*v_vertices.push_back({1, 2, 3});
    v_vertices.push_back({4, 5, 6});
    v_vertices.push_back({7, 8, 9});
    */
    
    v_vertices.emplace_back(1, 2, 3);
    v_vertices.emplace_back(4, 5, 6);
    v_vertices.emplace_back(7, 8, 9);
    
    
    return 0;
}
