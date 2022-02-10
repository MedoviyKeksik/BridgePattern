#include "rectangle.h"

Rectangle::Rectangle(const Point& p1, const Point& p2)
    : point1(p1)
    , point2(p2)
{
}

void Rectangle::Draw()
{
    DrawLine(point1, { point1.x, point2.y });
    DrawLine(point1, { point2.x, point1.y });
    DrawLine(point2, { point1.x, point2.y });
    DrawLine(point2, { point2.x, point1.y });
}
