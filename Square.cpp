#include "Square.h"

using namespace std;

Square::Square(double s, string n) : Rectangle(s, s, n) {}

double Square::getSide() { return side; }
