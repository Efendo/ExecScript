CC := g++
MAIN_EXCS := $(wildcard src/*.cpp)

SRCS := $($(SRC_DIR)/main.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BIN64_DIR)/%,$(SRCS))

excs: $(OBJS)
	$(CC) $(MAIN_EXCS) -o bin64/excs $^