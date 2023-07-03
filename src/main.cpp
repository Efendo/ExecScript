#include <iostream>
#include <fstream>
#include <string>
#include "getFile.hpp"
#include <cstring>

/*
ExecScript <https://github.com/Efendo/ExecScript/> made by Efendo <https://github.com/Efendo/> for the ExecScript language.

Date of Creation: 15th of july 2023
*/

int main(int argc, char** argv) {
    if (argc == 4 && strcmp(argv[1], "-c") == false){
        std::cout << "> ExecScript programming language by Efendo" << std::endl;
        std::string filename = argv[2];
        std::string OfName = argv[3];
        std::string fileContents = getFileContents(filename);
        std::ofstream midcomp(".midcomp.cpp");
        std::string headings = "#include <iostream>\n#define print std::cout<<\n#define main int main(int argc, char** argv)\n#define elif else if\n#define NumPointer int*\n#define isnt !=\n#define blueprint class\n#define is ==\n#define mod %\n#define input std::cin>>\n#define str std::string\n#define pointer char*\n#define clr_text system(\"clear\")\n";
        midcomp << headings << fileContents;
        midcomp.close();
        std::string cmd = "g++ .midcomp.cpp -o " + OfName;
        if (std::system(cmd.c_str()) == 0) {
            std::cout << "> \033[32mCompilation successfull.\033[0m" << std::endl;
        } else {
            std::cerr << "> \033[31mCompilation failed.\033[0m" << std::endl;
        }
        system("rm .midcomp.cpp");
    } else if(argc == 2 && strcmp(argv[1], "-h") == false){
        std::cout << "ExecScript by Efendo <https://github.com/Efendo/ExecScript>\n"
        << "\n"
        << "Usage: \n"
        << "    -c compile two files. Its arguments are [File to compile] [Output file]\n"
        << "    -h prints out this prompt. Dont pass any other arguments with this\n"
        << "    -m makes a new excs project. Its argument is [Project Name]\n"
        << "    -cpp works like -c but compiles to C++. For the second argument you dont have to put .cpp at the end\n"
        << std::endl;
    } else if(argc == 3 && strcmp(argv[1], "-m") == false){
        std::string name = argv[2];
        std::string make = "mkdir " + name; 
        std::string cmd  = "cd " + name + "; echo '#!/bin/bash\n#################################\n#### ExecScript build script ####\n#################################\n\n#Compile:\n\texcs -c src/main.excs.cpp main\n#Run:\n\t./main\n#Clean:\n\trm main' > run;chmod +x run ; mkdir src; touch src/main.excs.cpp; mkdir libraries";
        system(make.c_str());
        system(cmd.c_str());
    } else if (argc == 4 && strcmp(argv[1], "-cpp") == false) {
        std::cout << "> ExecScript programming language by Efendo" << std::endl;
        std::string filename = argv[2];
        std::string OfName = argv[3];
        std::string fileContents = getFileContents(filename);
        std::ofstream midcomp(OfName + ".cpp");
        std::string headings = "#include <iostream>\n#define print std::cout<<\n#define main int main(int argc, char** argv)\n#define error std::cerr\n#define elif else if\n#define NumPointer int*\n#define isnt !=\n#define blueprint class\n#define is ==\n#define mod %\n#define input std::cin>>\n#define str std::string\n#define pointer char*\n#define clr_text system(\"clear\")\n";
        midcomp << headings << fileContents;
        midcomp.close();
        std::cout << "> \032[34m" << "Wrapped " << filename << "\033[0m" << std::endl;
    } else {
        std::cerr << "Usage: \n"
                  << "    -c compile two files. Its arguments are [File to compile] [Output file]\n"
                  << "    -h prints a help prompt. Dont pass any other arguments with it\n"
                  << "    -m makes a new excs project. Its argument is [Project Name]\n"
                  << "    -cpp works like -c but compiles to C++. For the second argument you dont have to put .cpp at the end\n"
                  << std::endl;
        exit(1);
    }
    return 0;
}
