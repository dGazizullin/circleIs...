#include "Circle.h"
#include "Dot.h"
#include <iostream>
using namespace std;

float Circle::getRad()
{
    return this->rad;
}

void Circle::setRad(float rad)
{
    this->rad = rad;
}

void Circle::show()
{
    cout << "\nx = ";
    cout << this->getX();
    cout << "\n";
    cout << "y = " << this->getY() << "\n";
    cout << "\nradius = " << this->getRad();
}

bool Circle::isInCircle(float x, float y)
{
    float xCenter = this->getX();
    float yCenter = this->getY();
    float rad = this-> getRad();
    if (((x - xCenter)*(x - xCenter) + (y - yCenter)*(y - yCenter)) <= rad*rad)
        return true;
    return false;
}

Circle::Circle(float x, float y, float rad) : Dot::Dot(x, y)
{
    this->rad = rad;
}

Circle::~Circle()
{

}
