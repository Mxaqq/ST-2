#include "circle.h"
#include <cmath>
#include <stdexcept>

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
        throw std::invalid_argument("Radius cannot be negative");
    }
    this->radius = radius;
    updateFromRadius();
}

void Circle::setFerence(double ference) {
    if (ference < 0) {
        throw std::invalid_argument("Ference cannot be negative");
    }
    this->ference = ference;
    updateFromFerence();
}

void Circle::setArea(double area) {
    if (area < 0) {
        throw std::invalid_argument("Area cannot be negative");
    }
    this->area = area;
    updateFromArea();
}

double Circle::getRadius() const { return radius; }
double Circle::getFerence() const { return ference; }
double Circle::getArea() const { return area; }