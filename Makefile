CC := g++
MAIN_EXCS := src/main.cpp
#############################
#### ExecScript Makefile ####
#############################

excs:
	mkdir -p bin
	$(CC) -w $(MAIN_EXCS) -o bin/excs $^

