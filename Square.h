#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

using namespace std;

class Square : public Rectangle {
private:
    double side;

public:
    // Constructor with parameters
    Square(double s, const string n = "Square");

    // Getter
    double getSide();
};

#endif // SQUARE_H 