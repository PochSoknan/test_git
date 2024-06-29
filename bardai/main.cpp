#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

int main() {
  Rectangle rect(5, 3);
  Circle circle(4);

  std::cout << "Rectangle Area: " << rect.getArea() << std::endl;
  std::cout << "Rectangle Perimeter: " << rect.getPerimeter() << std::endl;

  std::cout << "Circle Area: " << circle.getArea() << std::endl;
  std::cout << "Circle Perimeter: " << circle.getPerimeter() << std::endl;

  return 0;
}
