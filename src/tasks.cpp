// Copyright 2022 UNN-CS
#include "tasks.h"
#include "circle.h"
#include <cmath>

namespace {
    const double EARTH_RADIUS = 6378100.0;
    const double POOL_RADIUS = 3.0;
    const double PATH_WIDTH = 1.0;
    const double CONCRETE_PRICE = 1000.0;
    const double FENCE_PRICE = 2000.0;
}

double calculateEarthRopeGap() {
    Circle earth(EARTH_RADIUS);
    earth.setFerence(earth.getFerence() + 1.0);
    return earth.getRadius() - EARTH_RADIUS;
}

double calculatePoolConstructionCost() {
    Circle pool(POOL_RADIUS);
    Circle poolWithPath(POOL_RADIUS + PATH_WIDTH);

    double pathArea = poolWithPath.getArea() - pool.getArea();
    double fenceLength = poolWithPath.getFerence();

    return (pathArea * CONCRETE_PRICE) + (fenceLength * FENCE_PRICE);
}