#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"  // Include base class header

class Rectangle : public Shape {
public:
  Rectangle(double width, double height);
  double getArea() const override;
  double getPerimeter() const override;

private:
  double width_;
  double height_;
};

#endif
