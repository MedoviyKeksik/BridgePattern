#include "gs2_drawing.h"

void GS2Drawing::DrawLine(const Point& p1, const Point& p2)
{
    gs.DrawLine(p1, p2);
}

void GS2Drawing::DrawCircle(const Point& center, double r)
{
    gs.DrawCircle(center, r);
}
