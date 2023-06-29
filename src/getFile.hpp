#include <iostream>
#include <string>
#include <fstream>
#ifndef GETFILE_HPP
#define GETFILE_HPP
//Function to get all contents of a file

std::string getFileContents(const std::string& filename) {
    std::ifstream file(filename);
    std::string contents;

    if (file) {
        file.seekg(0, std::ios::end);
        contents.resize(file.tellg());
        file.seekg(0, std::ios::beg);
        file.read(&contents[0], contents.size() + 1);
        file.close();
    } else {
        std::cerr << "Failed to open file: " << filename << std::endl;
    }

    return contents;
}
#endif