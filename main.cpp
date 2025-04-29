#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    BasicShape *shapes[5] = {
        new Rectangle(2,4, "Rectangle 2x4"), 
        new Rectangle(4,4, "Rectangle 4x4"), 
        new Circle(2, 4, 5, "Circle (2, 4)"),
        new Circle(3, 6, 2, "Circle (3, 6)"),
        new Square(6, "6 Square")
    };

    for (int i = 0; i < 5; i++){
        cout << shapes[i]->getName() << " has an area of " << to_string(shapes[i]->getArea()) << endl;
    }

    return 0;
}