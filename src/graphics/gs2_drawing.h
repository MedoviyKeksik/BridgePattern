#pragma once

#include "drawing.h"
#include "gs2.h"

class GS2Drawing : public Drawing
{
public:
    GS2Drawing() = default;
    void DrawLine(const Point& p1, const Point& p2) override;
    void DrawCircle(const Point& center, double r) override;

private:
    GS2 gs;
};
