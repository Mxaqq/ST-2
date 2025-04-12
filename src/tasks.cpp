// Copyright 2022 UNN-CS
#include <cstdint>
#include "circle.h"
#include "tasks.h"

double Earth() {
    double t_radius = 6378100;
    Circle circle;
    circle.setRadius(t_radius);
    double t_l = circle.getFerence();
    circle.setFerence(t_l + 1);

    return circle.getRadius() - t_radius;
}

double track_cost() {
    Circle circle;
    circle.setRadius(3);
    double S_b = circle.getArea();

    circle.setRadius(4);
    double s = circle.getArea() - S_b;

    return s * 1000 + circle.getFerence() * 2000;
}
