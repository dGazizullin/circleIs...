#include <iostream>
#include "Dot.h"
#include "Circle.h"
#include <cstdlib>

using namespace std;

int main()
{
    Dot *dot = new Dot(1,1);
    dot->show();
    cout << "\n\n\n";
    Circle *circle = new Circle(2,2,2);
    circle->move_(1,1);
    circle->show();
    cout << "\n" << circle->isInCircle(3,3);
    cout << "\n" << circle->isInCircle(0,3);
    cout << "\n" << circle->isInCircle(1,3);
    cout << "\n" << circle->isInCircle(2,3);
    return 0;
}
