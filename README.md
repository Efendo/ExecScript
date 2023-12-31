<style>
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

![](https://img.shields.io/badge/State-Beta-yellow) ![](https://img.shields.io/github/last-commit/Efendo/Execscript) ![](https://img.shields.io/badge/Created%20by-Efendo-success) ![](https://img.shields.io/github/languages/top/Efendo/Execscript)

# Docs

## What is ExecScript?
ExecScript is a C++ Dialect that's intended to make C++ look a little bit like Basic.

Here's some example code:
````C++
main {
    print "This is ExecScript!";
    print 5 mod 6;
    print 5 is 5;
}
````

## Requirements and notes
- GCC, to confirm that you have it run g++ -v

## Install ExecScript
execute this command to install ExecScript:
````Shell
# Using git
git clone https://github.com/Efendo/ExecScript/
# Using gh CLI
gh repo clone Efendo/ExecScript
````

##### Note: it has been compiled on x86-64 mac, you may have to recompile it using: ````cd ExecScript && make -s && cd ..````

then add it to your path
````Shell
export PATH="$PATH:$HOME/ExecScript/bin/"
````

## Commands

To compile a file, type:
````Shell
excs -c [FileToCompile] [OutputFile]
````

To compile a file to C++, type:
````Shell
excs -cpp [FileToCompile] [OutputFile]
````

To get help, type:
````Shell
excs -h
````

to make an excs project (you dont need to), type:
````Shell
excs -m [ProjectName]
````
###### to run it (the project), type ./run

## Trouble shooting / error numbers

### err127
#### -File not found

### err349
#### -File is empty

## Keywords / Macros
- "str [VarName]" A macro for std::string

- "print [Content]" A Macro for std::cout<<html

- "input [Var]" A macro for std::cin>>

- "pointer [VarName]" A macro for char*

- "clr_text" A macro to clear the console

- "NumPointer [VarName]" a macro for int*

- "is" a macro for ==

- "isnt" a macro for !=

- "mod" a macro for % (modulo)

- "blueprint" a macro for class

- "elif" its for "else if"

- "error" a macro for std::cerr

# Links

[Efendo's Github](https://github.com/Efendo)

[View Website](https://tinyurl.com/ExecScript)

[View on Github](https://github.com/Efendo/ExecScript/)

[Try it on replit](https://replit.com/@Efendo/ExecScript-Template?v=1)
