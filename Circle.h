#ifndef CIRCLE_H
#define CIRCLE_H
#include "Dot.h"

class Circle : public Dot
{
public:
    float getRad();
    void setRad(float rad);
    void show();
    bool isInCircle(float x, float y);
    Circle();
    Circle(float x, float y, float rad);
    virtual ~Circle();

protected:
    float rad;

};

#endif // CIRCLE_H
