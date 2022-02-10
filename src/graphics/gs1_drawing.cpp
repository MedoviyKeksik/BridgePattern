#include "gs1_drawing.h"

void GS1Drawing::DrawLine(const Point& p1, const Point& p2)
{
    gs.draw_a_line(p1.x, p1.y, p2.x, p2.y);
}

void GS1Drawing::DrawCircle(const Point& center, double r)
{
    gs.draw_a_circle(center.x, center.y, r);
}