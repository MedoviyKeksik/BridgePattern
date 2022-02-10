#include "shape.h"

void Shape::DrawLine(const Point& p1, const Point& p2)
{
    this->drawing->DrawLine(p1, p2);
}

void Shape::DrawCircle(const Point& center, double r)
{
    this->drawing->DrawCircle(center, r);
}
