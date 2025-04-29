#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>

using namespace std;

class BasicShape {
private:
    double area;
    string name;

public:
    // Constructor
    BasicShape();

    // Pure virtual function to be implemented by derived classes
    virtual void calcArea() = 0;

    // Getters
    double getArea() const;
    string getName() const;

    // Setters
    void setArea(double a);
    void setName(const string n);

    // Virtual destructor
    virtual ~BasicShape();
};

#endif