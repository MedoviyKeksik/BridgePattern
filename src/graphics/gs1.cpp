#include "gs1.h"
#include <iostream>

void GS1::draw_a_line(const double x1, const double y1, const double x2, const double y2)
{
    std::cout << "GS1::draw_a_line(" << x1 << ", " << y1 << ", " << x2 << ", " << y2 << ")" << std::endl;
}

void GS1::draw_a_circle(const double x, const double y, const double r)
{
    std::cout << "GS1::draw_a_circle(" << x << ", " << y << ", " << r << ")" << std::endl;
}
