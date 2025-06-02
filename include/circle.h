// Copyright 2022 UNN-CS
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>


class Circle {
private:
    double radius;
    double ference;
    double area;

    void updateFromRadius();
    void updateFromFerence();
    void updateFromArea();

public:
    explicit Circle(double r = 0);

    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);

    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};
#endif  // INCLUDE_CIRCLE_H_
