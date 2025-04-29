#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

using namespace std;

class Circle : public BasicShape {
private:
    double xCenter;
    double yCenter;
    double radius;

public:
    // Constructor with parameters
    Circle(double x, double y, double r, string n = "Circle");
    void calcArea() override;
    // Getters
    double getXCenter() const;
    double getYCenter() const;
    double getRadius() const;
};

#endif // CIRCLE_H 