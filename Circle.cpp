#include "Circle.h"
#include <cmath>

using namespace std;

// Constructor with parameters
Circle::Circle(double x, double y, double r, string n) {
    setName(n);
    xCenter = x;
    yCenter = y;
    radius = r;
    calcArea();
};

// Implementation of pure virtual function from base class
void Circle::calcArea() {
    // Calculate area using formula: π * radius^2
    // Call setArea from base class to store the result
    setArea(M_PI * pow(radius, 2));
}

// Getters
double Circle::getXCenter() const { return xCenter; }
double Circle::getYCenter() const { return yCenter; }
double Circle::getRadius() const { return radius; }

BasicShape::~BasicShape(){}

