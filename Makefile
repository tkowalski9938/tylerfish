# Makefile

# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++11 -Wall
DEPFLAGS = -MMD -MP

# Directories
SRC_DIR := .
BUILD_DIR := build

# Find all source files recursively
SRCS := $(shell find $(SRC_DIR) -type f -name '*.cc')

# Generate object file names from source file names
OBJS := $(patsubst $(SRC_DIR)/%.cc, $(BUILD_DIR)/%.o, $(SRCS))
DEPS := $(OBJS:.o=.d)

# Target executable
TARGET := tylerfish

# Main target (executable)
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cc
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $< -o $@

# Include dependency files
-include $(DEPS)

# Clean rule to remove generated files
clean:
	rm -rf $(BUILD_DIR)/*

# Phony target to prevent conflicts with files named 'clean'
.PHONY: clean
