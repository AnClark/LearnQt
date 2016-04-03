#include "circletool.h"

CircleTool::CircleTool(const double &r)
{
    radius=r;
}

double CircleTool::GenSquare()
{
    double s;
    s = pi * radius * radius;

    return s;
}

double CircleTool::GenCircum()
{
    double c;
    c = 2 * pi * radius;

    return c;
}
