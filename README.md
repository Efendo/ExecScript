# ExecScript
<link rel="icon" type="image/x-icon" href="ExecScript.ico">

## sounds like the js function, is a cpp dialect
this is a programming language called ExecScript thats like cpp but supposed to be easier

![](https://img.shields.io/badge/State-Alpha-yellow) ![](https://img.shields.io/github/last-commit/Efendo/Execscript) ![](https://img.shields.io/badge/Created%20by-Efendo-success) ![](https://img.shields.io/github/repo-size/Efendo/Execscript) ![](https://img.shields.io/github/languages/top/Efendo/Execscript)

# Docs

## What is ExecScript?
ExecScript is a C++ Dialect that's intended to make C++ look a little bit like Basic.

## The Compiler
The compiler isnt really a compiler. once you start it you can pass two arguments. First one is the file to be "compiled" and the second one is the name of the output file. Heres an example:
````
excs file to compile: file.excs

name of the output file [for example 'main' ] : output
````

## Installation
i Dont know how to turn it into a runnable command. However you can clone it using git and create a shell function in your .bashrc or .zshrc
like this:
````Shell
excs(){
    ExecScript/compiler/main.cpp
}
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
