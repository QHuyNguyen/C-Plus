//
//  main.cpp
//  DynamicArray
//
//  Created by Quoc Huy Nguyen on 10/5/20.
//  Copyright © 2020 Quoc Huy Nguyen. All rights reserved.
//

#include <iostream>
#include <vector>

struct Vertex{
    float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, Vertex& vertex){
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main(int argc, const char * argv[]) {
    
    std::vector<Vertex> vertices;
    vertices.push_back({1, 2, 3});
    vertices.push_back({5, 6, 7});
    
    for(int i = 0; i < vertices.size(); i++){
        std::cout << vertices[i] << std::endl;
    }
    
    for(Vertex& vertice : vertices)
    std::cout << vertice << std::endl;
    
    return 0;
}
