#pragma once

#include <ostream>

struct Point
{
    friend std::ostream& operator<<(std::ostream& os, const Point& point);

    double x, y;
};
