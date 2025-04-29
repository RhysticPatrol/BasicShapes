#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double l, double w, string n) {
    setName(n);
    length = l;
    width = w;
    calcArea();
}

void Rectangle::calcArea() {
    setArea(length * width);
}

double Rectangle::getLength() { return length; }
double Rectangle::getWidth()  { return width; }
