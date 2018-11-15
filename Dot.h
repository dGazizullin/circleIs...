#ifndef DOT_H
#define DOT_H

class Dot
{
public:
    void setX(float x);
    float getX();
    void setY(float y);
    float getY();
    void move_(float x, float y);
    void show();
    Dot();
    Dot(float x, float y);
    virtual ~Dot();

protected:
    float x;
    float y;
};

#endif // DOT_H
