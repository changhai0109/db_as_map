# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17 -O3
LDFLAGS := -lsqlite3

# Directories
SRCDIR := .
BUILDDIR := build
TARGET := output

# Find all C++ files
SRCS := $(shell find $(SRCDIR) -name '*.cc')
OBJS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SRCS:.cc=.o))
DEPS := $(OBJS:.o=.d)

# Include directories
INC := -Iinclude -I. -Ithird_party

# Targets
$(TARGET): $(OBJS)
	@echo " Linking..."
	$(CXX) $^ $(LDFLAGS) -o $(TARGET)

# Compile
$(BUILDDIR)/%.o: $(SRCDIR)/%.cc
	@mkdir -p $(@D)
	@echo " Compiling $<..."
	$(CXX) $(CXXFLAGS) $(INC) -MMD -c -o $@ $<

# Clean
clean:
	@echo " Cleaning..."
	$(RM) -r $(BUILDDIR) $(TARGET)

# Clang-format
format:
	@echo " Formatting..."
	@clang-format -i $(SRCS) $(wildcard include/*.hh) --style=file

# Include dependencies
-include $(DEPS)

.PHONY: clean
