// Copyright 2022 UNN-CS
#include <cstdint>
#include <cmath>
#include <stdexcept>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Circle {
 private:
    double radius;
    double ference;
    double area;

    void updateFromRadius() {
        ference = 2 * M_PI * radius;
        area = M_PI * radius * radius;
    }

    void updateFromFerence() {
        radius = ference / (2 * M_PI);
        area = M_PI * radius * radius;
    }

    void updateFromArea() {
        radius = sqrt(area / M_PI);
        ference = 2 * M_PI * radius;
    }

 public:
    explicit Circle(double r = 0) {
        setRadius(r);
    }

    void setRadius(double radius) {
        if (radius < 0) {
            throw std::invalid_argument("Radius cannot be negative");
        }
        this->radius = radius;
        updateFromRadius();
    }

    void setFerence(double ference) {
        if (ference < 0) {
            throw std::invalid_argument("Ference cannot be negative");
        }
        this->ference = ference;
        updateFromFerence();
    }

    void setArea(double area) {
        if (area < 0) {
            throw std::invalid_argument("Area cannot be negative");
        }
        this->area = area;
        updateFromArea();
    }

    double getRadius() const { return radius; }
    double getFerence() const { return ference; }
    double getArea() const { return area; }
};
