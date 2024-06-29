

g++ -Wall -std=c++11 -c Shape.cpp Shape.h  # Compile Shape.cpp with its header
g++ -Wall -std=c++11 -c Rectangle.cpp Shape.h Rectangle.h  # Compile Rectangle.cpp with its headers
g++ -Wall -std=c++11 -c Circle.cpp Shape.h Circle.h  # Compile Circle.cpp with its headers
g++ -Wall -std=c++11 -c main.cpp Shape.h  # Compile main.cpp with Shape.h


g++ -Wall -std=c++11 Shape.o Rectangle.o Circle.o main.o -o shapes
