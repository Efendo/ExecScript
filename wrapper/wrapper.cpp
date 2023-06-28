#include <iostream>
#include <fstream>
#include <string>
#include "getFile.hpp"
#include <cstring>

/*
ExecScript wrapper made by Efendo <https://github.com/Efendo/> for the ExecScript language.

Date of Creation: 15th of july 2023
*/

int main(int argc, char** argv) {
    if (argc == 3 && strcmp(argv[1], "-h") == 0){
        std::string filename = argv[2];
        std::string OfName = argv[3];
        std::string fileContents = getFileContents(filename);
        std::cout << fileContents << std::endl;
        std::ofstream midcomp(".midcomp.cpp");
        std::string headings = "#include <iostream>\n#define print std::cout<<\n#define main int main(int argc, char** argv)\n#define NumPointer int*\n#define isnt !=\n#define blueprint class\n#define is ==\n#define mod %\n#define input std::cin>>\n#define str std::string\n#define pointer char*\n#define clr_text system(\"clear\")\n";
        midcomp << headings << fileContents;
        midcomp.close();
        std::string cmd = "g++ .midcomp.cpp -o " + OfName;
        if (std::system(cmd.c_str()) == 0) {
            std::cout << "Compilation successful." << std::endl;
        } else {
            std::cerr << "Compilation failed." << std::endl;
        }
        system("rm .midcomp.cpp");
    } else if(argc == 2 && strcmp(argv[1], "-h") == 0){
        std::cout << "ExecScript by Efendo <https://github.com/Efendo/ExecScript>\n"
        << "\n"
        << "Usage: \n"
        << "    -c compile two files. Its arguments are [File to compile] [Output file]\n"
        << "    -h prints out this prompt. Dont pass any other arguments with this\n"
        << std::endl;
        return 1;
    } else {
        std::cout << argc << std::endl;
        std::cerr << "Usage: \n"
                  << "    -c compile two files. Its arguments are [File to compile] [Output file]\n"
                  << "    -h prints a help prompt. Dont pass any other arguments with it\n"
                  << std::endl;
    }
    return 0;
}
