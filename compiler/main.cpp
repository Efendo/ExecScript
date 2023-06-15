#include <iostream>
#include <fstream>
#include <string>
#include "getFile.hpp"

/*
ExecScript compiler made by Efendo <https://github.com/Efendo/> for the ExecScript language.

Date of Creation: 15th of july 2023
Last modified: 15th of july 2023
*/

int main() {
    std::string filename = "main.ecs";
    std::string OfName = "main";
    std::cout << "excs file to compile: ";
    std::cin >> filename;
    std::cout << "\n";
    std::cout << "name of the output file [for example 'main' ] : ";
    std::cin >> OfName;
    std::string fileContents = getFileContents(filename);

    std::cout << fileContents << std::endl;
    
    std::ofstream midcomp(".midcomp.cpp");
    std::string headings = "#include <iostream>\n#define print std::cout<<\n#define input std::cin>>\n#define str std::string\n#define pointer char*\n#define clr_text system(\"clear\")\n";
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
