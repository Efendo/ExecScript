#include <iostream>
#include <fstream>
#include <string>
#include "getFile.hpp"

/*
ExecScript wrapper made by Efendo <https://github.com/Efendo/> for the ExecScript language.

Date of Creation: 15th of july 2023
*/

int main() {
    std::string filename = "main.excs";
    std::string OfName = "main";
    std::cout << "excs file: ";
    std::cin >> filename;
    std::cout << "compile as: ";
    std::cin >> OfName;
    std::string fileContents = getFileContents(filename);

    std::cout << fileContents << std::endl;
    
    std::ofstream midcomp(".midcomp.cpp");
    std::string headings = "#include <iostream>\n#define print std::cout<<\n#define NumPointer int*\n#define isnt !=\n#define blueprint class\n#define is ==\n#define mod %\n#define input std::cin>>\n#define str std::string\n#define pointer char*\n#define clr_text system(\"clear\")\n";
    midcomp << headings << fileContents;
    midcomp.close();
    std::string cmd = "g++ .midcomp.cpp -o " + OfName;
    if (std::system(cmd.c_str()) == 0) {
        std::cout << "Compilation successful." << std::endl;
    } else {
        std::cerr << "Compilation failed." << std::endl;
    }

    system("rm .midcomp.cpp");
    return 0;
}