#pragma once
#include "../geom.h"

_GEOM_BEGIN

void hello();

class Vec2d{
public:
    Vec2d(double x, double y);
    double dot(Vec2d& v2);
    double cross(Vec2d& v2);
    double norm();

private:
    double x, y;
};

_GEOM_END