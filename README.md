# ExecScript
<link rel="icon" type="image/x-icon" href="ExecScript.ico">

## sounds like the js function, is a cpp dialect
this is a programming language called ExecScript thats like cpp but supposed to be easier

![](https://img.shields.io/badge/State-Alpha-yellow) ![](https://img.shields.io/github/last-commit/Efendo/Execscript) ![](https://img.shields.io/badge/Created%20by-Efendo-success) ![](https://img.shields.io/github/languages/top/Efendo/Execscript)

# Docs

## What is ExecScript?
ExecScript is a C++ Dialect that's intended to make C++ look a little bit like Basic.

## The Compiler
The compiler isnt really a compiler. once you start it you can pass two arguments. First one is the file to be "compiled" and the second one is the name of the output file. Heres an example:
````
excs file: file.excs
compile as: output
````

## Installation
execute this command to install ExecScript:
````Shell
git clone https://github.com/Efendo/ExecScript/;chmod +x ExecScript/bin64/excs-compiler
````
then add it to your path
````Shell
export PATH="$PATH:$HOME/ExecScript/bin64/"
````

## Keywords / Macros

- "str [VarName]"
A macro for std::string

- "print [Content]"
A Macro for std::cout<<

- "input [Var]"
A macro for std::cin>>

- "pointer [VarName]"
A macro for char*

- "clr_text"
A macro to clear the console

# Links

[Efendo's Github](https://github.com/Efendo)

[View on Github](https://github.com/Efendo/ExecScript/)
