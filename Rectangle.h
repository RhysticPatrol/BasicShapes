#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

using namespace std;

class Rectangle : public BasicShape {
private:
    double length;
    double width;

public:
    // Constructor with parameters
    Rectangle(double l, double w, string n = "Rectangle");

    // Implementation of pure virtual function from base class
    void calcArea() override;

    // Getters
    double getLength();
    double getWidth();
};

#endif // RECTANGLE_H 