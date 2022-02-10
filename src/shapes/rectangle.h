#pragma once

#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle() = default;
    Rectangle(const Point& p1, const Point& p2);

    void Draw() override;

    void        SetTopLeftPoint(const Point& point) { point1 = point; }
    auto&       GetTopLeftPoint() { return point1; }
    const auto& GetTopLeftPoint() const { return point2; }

    void        SetBottomRightPoint(const Point& point) { point2 = point; }
    auto&       GetBottomRightPoint() { return point2; }
    const auto& GetBottomRightPoint() const { return point2; }

private:
    Point point1, point2;
};
