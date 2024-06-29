#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"  // Include base class header

class Circle : public Shape {
public:
  Circle(double radius);
  double getArea() const override;
  double getPerimeter() const override;

private:
  double radius_;
};

#endif
