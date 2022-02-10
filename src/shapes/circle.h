#pragma once

#include "shape.h"

class Circle : public Shape
{
public:
    Circle() = default;
    Circle(const Point& center, double radius);

    void Draw() override;

    void        SetCenter(const Point& center) { this->center = center; }
    auto&       GetCenter() { return center; }
    const auto& GetCenter() const { return center; }

    void SetRadius(const double radius) { this->radius = radius; }
    auto GetRadius() const { return radius; }

private:
    Point  center;
    double radius;
};
