#include "Parameters.h"
#include <fstream>
#include <iostream>


Parameters::Parameters() {}

bool Parameters::load(std::string file) {
    std::ifstream ifs;
    ifs.open(file);
    if (ifs.fail()){
            std::cout << "can't read parameter file: " << file;
            return false;
    }

    std::string line;
    lines.clear();
    while(std::getline(ifs, line)){
        if(line.substr(0, 1) == "#" || line.empty()) continue;

        lines.push_back(line);        
    }
    ifs.close();

    return true;
}
