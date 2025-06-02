// Copyright 2022 UNN-CS
#include "tasks.h"

double Earth() {
    Circle earth(EARTH_RADIUS);
    earth.setFerence(earth.getFerence() + 1.0);
    return earth.getRadius() - EARTH_RADIUS;
}

double track_cost() {
    Circle pool(POOL_RADIUS);
    Circle poolWithPath(POOL_RADIUS + PATH_WIDTH);

    double pathArea = poolWithPath.getArea() - pool.getArea();
    double fenceLength = poolWithPath.getFerence();

    return (pathArea * CONCRETE_PRICE) + (fenceLength * FENCE_PRICE);
}