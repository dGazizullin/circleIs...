#include "Dot.h"
#include <iostream>
using namespace std;

void Dot::setX(float x)
{
    this->x = x;
}

float Dot::getX()
{
    return this->x;
}

void Dot::setY(float y)
{
    this->y = y;
}

float Dot::getY()
{
    return this->y;
}

void Dot::move_(float x, float y)
{
    float curX = this->getX();
    float curY = this->getY();
    this->setX(curX + x);
    this->setY(curY + y);
}

void Dot::show()
{
    cout << "\nx = ";
    cout << this->getX();
    cout << "\n";
    cout << "y = " << this->getY() << "\n";
}

Dot::Dot(float x, float y)
{
    this->x = x;
    this->y = y;
}

Dot::Dot(){}

Dot::~Dot()
{
    //dtor
}
