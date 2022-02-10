#include "gs2.h"
#include <iostream>

void GS2::DrawLine(const Point& p1, const Point& p2)
{
    std::cout << "GS2::DrawLine(" << p1 << ", " << p2 << ")" << std::endl;
}

void GS2::DrawCircle(const Point& center, const double r)
{
    std::cout << "GS2::DrawCircle(" << center << ", " << r << ")" << std::endl;
}