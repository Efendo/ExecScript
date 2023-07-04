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
        std::cerr << "> \033[31m"<< "error 127: File " << filename << " was not found"<<"\033[0m" << std::endl;
        exit(127);
    }
    if(contents == "\0"){
        std::cerr << "> \033[31m" << "error 349: provided file is empty" << "\033[0m" << std::endl;
        exit(349);
    }

    return contents;
}
#endif