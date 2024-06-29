CXX = g++  # Replace with your C++ compiler if different
CXXFLAGS = -Wall -std=c++11  # Compiler flags (warnings, standard)

# Object files (one per source file)
OBJECTS = main.o Rectangle.o Circle.o Shape.o  # Include Shape.o for base class

# Executable name
EXEC = shapes

# Target: Build the executable
all: $(EXEC)

$(EXEC): $(OBJECTS)
  $(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJECTS)

# Compile each source file with its dependencies
$(OBJECTS): %.o: %.cpp $(wildcard Shape.h Rectangle.h Circle.h)  # Use wildcard for all headers
  $(CXX) $(CXXFLAGS) -c $< -I.

# Clean rule: Remove object files and executable
clean:
  rm -rf $(OBJECTS) $(EXEC)

