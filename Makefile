CC := g++
MAIN_EXCS := $(wildcard src/*.cpp)

#############################
#### ExecScript Makefile ####
#############################

excs:
	$(CC) -w $(MAIN_EXCS) -o bin64/excs $^