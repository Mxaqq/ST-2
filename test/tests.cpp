// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cstdint>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#include "circle.h"
#include "tasks.h"

const double EPS = 0.001;

TEST(ST2, ckekGetRadius) {
    Circle circle;
    circle.setRadius(5);
    EXPECT_NEAR(circle.getRadius(), 5.0, EPS);
}

TEST(ST2, ckekGetFerence) {
    Circle circle;
    circle.setFerence(5);
    EXPECT_NEAR(circle.getFerence(), 5.0, EPS);
}

TEST(ST2, ckekGetArea) {
    Circle circle;
    circle.setArea(5);
    EXPECT_NEAR(circle.getArea(), 5.0, EPS);
}

TEST(ST2, ckekSetRadius_GetFerence) {
    Circle circle;
    circle.setRadius(5);
    EXPECT_NEAR(circle.getFerence(), 31.41593, EPS);
}

TEST(ST2, ckekSetRadius_GetArea) {
    Circle circle;
    circle.setRadius(5);
    EXPECT_NEAR(circle.getArea(), 78.53982, EPS);
}

TEST(ST2, ckekSetFerence_GetRadius) {
    Circle circle;
    circle.setFerence(5);
    EXPECT_NEAR(circle.getRadius(), 0.79617, EPS);
}

TEST(ST2, ckekSetFerence_GetArea) {
    Circle circle;
    circle.setFerence(5);
    EXPECT_NEAR(circle.getArea(), 1.9894367, EPS);
}

TEST(ST2, ckekSetArea_GetRadius) {
    Circle circle;
    circle.setArea(5);
    EXPECT_NEAR(circle.getRadius(), 1.2615662, EPS);
}

TEST(ST2, ckekSetArea_GetFerence) {
    Circle circle;
    circle.setArea(5);
    EXPECT_NEAR(circle.getFerence(), 7.9266545, EPS);
}

TEST(ST2, ckekSetRadius_GetFerence_pi) {
    Circle circle;
    circle.setRadius(1);
    EXPECT_NEAR(circle.getFerence(), 2 * M_PI, EPS);
}

TEST(ST2, ckekSetRadius_GetArea_pi) {
    Circle circle;
    circle.setRadius(1);
    EXPECT_NEAR(circle.getArea(), M_PI, EPS);
}

TEST(ST2, ckekSetFerence_GetRadius_pi) {
    Circle circle;
    circle.setFerence(2 * M_PI);
    EXPECT_NEAR(circle.getRadius(), 1, EPS);
}

TEST(ST2, ckekSetFerence_GetArea_pi) {
    Circle circle;
    circle.setFerence(2 * M_PI);
    EXPECT_NEAR(circle.getArea(), M_PI, EPS);
}

TEST(ST2, ckekSetArea_GetRadius_pi) {
    Circle circle;
    circle.setArea(M_PI);
    EXPECT_NEAR(circle.getRadius(), 1, EPS);
}

TEST(ST2, ckekSetArea_GetFerence_pi) {
    Circle circle;
    circle.setArea(M_PI);
    EXPECT_NEAR(circle.getFerence(), 2 * M_PI, EPS);
}

TEST(ST2, ckekSetRadius_GetFerence_0) {
    Circle circle;
    circle.setRadius(0);
    EXPECT_NEAR(circle.getFerence(), 0, EPS);
}

TEST(ST2, ckekSetRadius_GetArea_0) {
    Circle circle;
    circle.setRadius(0);
    EXPECT_NEAR(circle.getArea(), 0, EPS);
}

TEST(ST2, ckekSetFerence_GetRadius_0) {
    Circle circle;
    circle.setFerence(0);
    EXPECT_NEAR(circle.getRadius(), 0, EPS);
}

TEST(ST2, ckekSetFerence_GetArea_0) {
    Circle circle;
    circle.setFerence(0);
    EXPECT_NEAR(circle.getArea(), 0, EPS);
}

TEST(ST2, ckekSetArea_GetRadius_0) {
    Circle circle;
    circle.setArea(0);
    EXPECT_NEAR(circle.getRadius(), 0, EPS);
}

TEST(ST2, ckekSetArea_GetFerence_0) {
    Circle circle;
    circle.setArea(0);
    EXPECT_NEAR(circle.getFerence(), 0, EPS);
}


TEST(ST2, ckekSetRadius_GetFerence_negativ) {
    Circle circle;
    circle.setRadius(-1);
    EXPECT_NEAR(circle.getFerence(), 0, EPS);
}

TEST(ST2, ckekSetRadius_GetArea_negative) {
    Circle circle;
    circle.setRadius(-1);
    EXPECT_NEAR(circle.getArea(), 0, EPS);
}

TEST(ST2, ckekSetFerence_GetRadius_negative) {
    Circle circle;
    circle.setFerence(-1);
    EXPECT_NEAR(circle.getRadius(), 0, EPS);
}

TEST(ST2, ckekSetFerence_GetArea_negative) {
    Circle circle;
    circle.setFerence(-1);
    EXPECT_NEAR(circle.getArea(), 0, EPS);
}

TEST(ST2, ckekSetArea_GetRadius_negative) {
    Circle circle;
    circle.setArea(-1);
    EXPECT_NEAR(circle.getRadius(), 0, EPS);
}

TEST(ST2, ckekSetArea_GetFerence_negative) {
    Circle circle;
    circle.setArea(-1);
    EXPECT_NEAR(circle.getFerence(), 0, EPS);
}

TEST(Tasks, Earth) {
    EXPECT_NEAR(Earth(), 0.15915, EPS);
}

TEST(Tasks, track_cost) {
    EXPECT_NEAR(track_cost(), 72256, 1);
}
