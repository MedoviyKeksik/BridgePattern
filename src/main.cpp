#include "graphics/drawing.h"
#include "graphics/gs1_drawing.h"
#include "graphics/gs2_drawing.h"
#include "shapes/circle.h"
#include "shapes/rectangle.h"
#include "shapes/shape.h"

int main()
{
    std::unique_ptr<Shape>   circle;
    std::unique_ptr<Shape>   rect;
    std::shared_ptr<Drawing> gs1(new GS1Drawing);
    std::shared_ptr<Drawing> gs2(new GS2Drawing);

    circle.reset(new Circle({ 1, 2 }, 3));
    circle->SetGraphicalSystem(gs1);
    circle->Draw();
    circle->SetGraphicalSystem(gs2);
    circle->Draw();

    rect.reset(new Rectangle({ 2, 3 }, { 5, 6 }));
    rect->SetGraphicalSystem(gs1);
    rect->Draw();
    rect->SetGraphicalSystem(gs2);
    rect->Draw();
    return 0;
}
