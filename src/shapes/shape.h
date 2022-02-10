#pragma once

#include "graphics/drawing.h"
#include <memory>

class Shape
{
public:
    virtual void Draw() = 0;

    void SetGraphicalSystem(std::shared_ptr<Drawing>& drawing) { this->drawing = drawing; }

protected:
    void DrawLine(const Point& p1, const Point& p2);
    void DrawCircle(const Point& center, double r);

private:
    std::shared_ptr<Drawing> drawing;
};
