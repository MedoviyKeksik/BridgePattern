#pragma once

#include "drawing.h"
#include "gs1.h"

class GS1Drawing : public Drawing
{
public:
    GS1Drawing() = default;
    void DrawLine(const Point& p1, const Point& p2) override;
    void DrawCircle(const Point& center, double r) override;

private:
    GS1 gs;
};
