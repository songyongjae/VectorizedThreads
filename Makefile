# Automated Makefile

CC = g++
CFLAGS = -Wall -Werror -D_GLIBCXX_DEBUG -std=c++11 -g -Iinclude
COMPILE = $(CC) $(CFLAGS) -c

# Update source and object file paths
SRC_DIR = src
OBJ_DIR = obj
OBJFILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(wildcard $(SRC_DIR)/*.cpp))
PROG_NAME = FMLib

# Default target
all: myprog

# Link object files to create the final program
myprog: $(OBJFILES)
	$(CC) -o $(PROG_NAME) $(OBJFILES)

# Compile each .cpp file into an .o file
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(OBJ_DIR)
	$(COMPILE) -o $@ $<

# Clean up generated files
clean:
	rm -rf $(OBJ_DIR) $(PROG_NAME)
