CC := g++
MAIN_EXCS := src/main.cpp
#############################
#### ExecScript Makefile ####
#############################

excs:
	$(CC) -w $(MAIN_EXCS) -o bin/excs $^