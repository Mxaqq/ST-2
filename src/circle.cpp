// Copyright 2022 UNN-CS
#include "circle.h"
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void Circle::updateFromRadius() {
    ference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
}

void Circle::updateFromFerence() {
    radius = ference / (2 * M_PI);
    area = M_PI * radius * radius;
}

void Circle::updateFromArea() {
    radius = sqrt(area / M_PI);
    ference = 2 * M_PI * radius;
}

Circle::Circle(double r) {
    setRadius(r);
}

void Circle::setRadius(double radius) {
    if (radius < 0) {
        this->radius = 0;
    } else {
        this->radius = radius;
}
    updateFromRadius();
}

void Circle::setFerence(double ference) {
    if (ference < 0) {
        this->ference = 0;
    } else {
        this->ference = ference;
    }
    updateFromFerence();
}

void Circle::setArea(double area) {
    if (area < 0) {
        this->area = 0;
    } else {
        this->area = area;
    }
    updateFromArea();
}

double Circle::getRadius() const { return radius; }
double Circle::getFerence() const { return ference; }
double Circle::getArea() const { return area; }
