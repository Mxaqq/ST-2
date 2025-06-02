// Copyright 2022 UNN-CS
// Copyright 2022 UNN-CS
#ifndef TASKS_H_
#define TASKS_H_

#include "circle.h"

namespace {const double EARTH_RADIUS = 6378100.0;const double POOL_RADIUS = 3.0;const double PATH_WIDTH = 1.0;const double CONCRETE_PRICE = 1000.0;const double FENCE_PRICE = 2000.0;}

// Вычисляет зазор между землёй и верёвкой (задача про Землю и верёвку)
double Earth() {
    Circle earth(EARTH_RADIUS);
    earth.setFerence(earth.getFerence() + 1.0);
    return earth.getRadius() - EARTH_RADIUS;
}

// Вычисляет стоимость строительства бассейна с дорожкой и ограждением
double track_cost() {
    Circle pool(POOL_RADIUS);
    Circle poolWithPath(POOL_RADIUS + PATH_WIDTH);

    double pathArea = poolWithPath.getArea() - pool.getArea();
    double fenceLength = poolWithPath.getFerence();

    return (pathArea * CONCRETE_PRICE) + (fenceLength * FENCE_PRICE);
}

#endif  // TASKS_H_