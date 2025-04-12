// Copyright 2022 UNN-CS
#define INCLUDE_CIRCLE_H_
#include <cstdint>


class Circle {
private:
    double radius = 0;
    double ference = 0;
    double area = 0;
public:
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    double getRadius();
    double getFerence();
    double getArea();
};
#endif  // INCLUDE_CIRCLE_H_
