#pragma once

#include "point.h"

class Drawing
{
public:
    virtual void DrawLine(const Point& p1, const Point& p2) = 0;
    virtual void DrawCircle(const Point& center, double r)  = 0;
};
