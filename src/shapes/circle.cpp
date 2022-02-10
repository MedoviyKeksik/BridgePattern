#include "circle.h"

Circle::Circle(const Point& center, const double radius)
    : center(center)
    , radius(radius)
{
}

void Circle::Draw()
{
    DrawCircle(center, radius);
}