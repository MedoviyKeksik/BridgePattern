#include "point.h"

std::ostream& operator<<(std::ostream& os, const Point& point)
{
    os << "Point(x: " << point.x << " y: " << point.y << ")";
    return os;
}
