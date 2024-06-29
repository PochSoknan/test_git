#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
  virtual double getArea() const = 0;  // Pure virtual function (must be defined in derived classes)
  virtual double getPerimeter() const = 0;  // Pure virtual function
};

#endif
