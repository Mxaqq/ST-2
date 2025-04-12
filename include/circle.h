// Copyright 2022 UNN-CS
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>


class Circle {
private:
    double radius = 0; // Радиус
    double ference = 0; // Длина окружности
    double area = 0; // Площадь круга
public:
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    double getRadius();
    double getFerence();
    double getArea();
};
#endif  // INCLUDE_CIRCLE_H_
