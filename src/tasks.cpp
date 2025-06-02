// Copyright 2022 UNN-CS
#include <cstdint>
#include "circle.h"
#include "tasks.h"

double Earth() {
    const double earthRadius = 6378100;
    Circle earth(earthRadius);
    double originalFerence = earth.getFerence();
    earth.setFerence(originalFerence + 1.0);
    return earth.getRadius() - earthRadius;
}

double track_cost() {
    Circle pool(3.0);
    double poolArea = pool.getArea();

    Circle poolWithTrack(4.0);
    double trackArea = poolWithTrack.getArea() - poolArea;

    double concreteCost = trackArea * 1000.0;
    double fenceCost = poolWithTrack.getFerence() * 2000.0;

    return concreteCost + fenceCost;
}
