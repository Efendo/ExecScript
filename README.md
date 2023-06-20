<style>
    h1,h2,h5,p,a,h6 {
        text-align: center;
    }

    a {
        background: #010b1c;
        border-radius: 25px;
        padding: 8px;
    }
        
    a[href='https://efendo.github.io/ExecScript/'] {
  		pointer-events: none;
  		cursor: default;
      	visibility: hidden;
	}
</style>
<img src="favicon.ico" />
<h1>ExecScript</h1>
<link rel="icon" type="image/x-icon" href="favicon.ico">

## sounds like the js function, is a cpp dialect
this is a programming language called ExecScript thats like cpp but supposed to be easier

![](https://img.shields.io/badge/State-Alpha-yellow) ![](https://img.shields.io/github/last-commit/Efendo/Execscript) ![](https://img.shields.io/badge/Created%20by-Efendo-success) ![](https://img.shields.io/github/languages/top/Efendo/Execscript)


[ExecScript Trailer/Presentation](https://raw.githubusercontent.com/Efendo/ExecScript-trailer/master/ExecScript.mp4)
# Docs

## What is ExecScript?
ExecScript is a C++ Dialect that's intended to make C++ look a little bit like Basic.

## The Compiler
The compiler isnt really a compiler. once you start it you can pass two arguments. First one is the file to be "compiled" and the second one is the name of the output file. Heres an example:
````
excs file: file.excs
compile as: output
````

## Requirements and notes
- GCC, to confirm that you have it run g++ -v

## Install ExecScript
execute this command to install ExecScript:
````Shell
git clone https://github.com/Efendo/ExecScript/;chmod +x ExecScript/bin64/excs-compiler
````

##### Note: it has been compiled on x86-64 mac, you may have to recompile it using: ```` g++ ExecScript/compiler/main.cpp -o ExecScript/bin64/excs-compiler    ````

then add it to your path
````Shell
export PATH="$PATH:$HOME/ExecScript/bin64/"
````
Now to run the compiler type:
````Shell
excs-compiler
````
##### You cant pass arguments with the command

## Keywords / Macros
- "str [VarName]" A macro for std::string

- "print [Content]" A Macro for std::cout<<html

- "input [Var]" A macro for std::cin>>

- "pointer [VarName]" A macro for char*

- "clr_text" A macro to clear the console

- "NumPointer [VarName]" a macro for int*

- "is" a macro for ==

- "mod" a macro for % (modulo)

- "blueprint" a macro for class

# Links

[Efendo's Github](https://github.com/Efendo)

[View Website](https://tinyurl.com/ExecScript)

[View on Github](https://github.com/Efendo/ExecScript/)

[Try it on replit](https://replit.com/@Efendo/ExecScript?v=1)