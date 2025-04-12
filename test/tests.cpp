// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cstdint>
#include <cmath>
#include "circle.h"
#include "tasks.h"

const double EPS = 0.001;

TEST(Circle, ckekGetRadius) {
    Circle circle;
    circle.setRadius(5);
    EXPECT_NEAR(circle.getRadius(), 5.0, EPS);
}

TEST(Circle, ckekGetFerence) {
    Circle circle;
    circle.setFerence(5);
    EXPECT_NEAR(circle.getFerence(), 5.0, EPS);
}

TEST(Circle, ckekGetArea) {
    Circle circle;
    circle.setArea(5);
    EXPECT_NEAR(circle.getArea(), 5.0, EPS);
}

TEST(Circle, ckekSetRadius_GetFerence) {
    Circle circle;
    circle.setRadius(5);
    EXPECT_NEAR(circle.getFerence(), 31.41593, EPS);
}

TEST(Circle, ckekSetRadius_GetArea) {
    Circle circle;
    circle.setRadius(5);
    EXPECT_NEAR(circle.getArea(), 78.53982, EPS);
}

TEST(Circle, ckekSetFerence_GetRadius) {
    Circle circle;
    circle.setFerence(5);
    EXPECT_NEAR(circle.getRadius(), 0.79617, EPS);
}

TEST(Circle, ckekSetFerence_GetArea) {
    Circle circle;
    circle.setFerence(5);
    EXPECT_NEAR(circle.getArea(), 1.9894367, EPS);
}

TEST(Circle, ckekSetArea_GetRadius) {
    Circle circle;
    circle.setArea(5);
    EXPECT_NEAR(circle.getRadius(), 1.2615662, EPS);
}

TEST(Circle, ckekSetArea_GetFerence) {
    Circle circle;
    circle.setArea(5);
    EXPECT_NEAR(circle.getFerence(), 7.9266545, EPS);
}

TEST(Circle, ckekSetRadius_GetFerence_pi) {
    Circle circle;
    circle.setRadius(1);
    EXPECT_NEAR(circle.getFerence(), 2 * M_PI, EPS);
}

TEST(Circle, ckekSetRadius_GetArea_pi) {
    Circle circle;
    circle.setRadius(1);
    EXPECT_NEAR(circle.getArea(), M_PI, EPS);
}

TEST(Circle, ckekSetFerence_GetRadius_pi) {
    Circle circle;
    circle.setFerence(2 * M_PI);
    EXPECT_NEAR(circle.getRadius(), 1, EPS);
}

TEST(Circle, ckekSetFerence_GetArea_pi) {
    Circle circle;
    circle.setFerence(2 * M_PI);
    EXPECT_NEAR(circle.getArea(), M_PI, EPS);
}

TEST(Circle, ckekSetArea_GetRadius_pi) {
    Circle circle;
    circle.setArea(M_PI);
    EXPECT_NEAR(circle.getRadius(), 1, EPS);
}

TEST(Circle, ckekSetArea_GetFerence_pi) {
    Circle circle;
    circle.setArea(M_PI);
    EXPECT_NEAR(circle.getFerence(), 2 * M_PI, EPS);
}

TEST(Circle, ckekSetRadius_GetFerence_0) {
    Circle circle;
    circle.setRadius(0);
    EXPECT_NEAR(circle.getFerence(), 0, EPS);
}

TEST(Circle, ckekSetRadius_GetArea_0) {
    Circle circle;
    circle.setRadius(0);
    EXPECT_NEAR(circle.getArea(), 0, EPS);
}

TEST(Circle, ckekSetFerence_GetRadius_0) {
    Circle circle;
    circle.setFerence(0);
    EXPECT_NEAR(circle.getRadius(), 0, EPS);
}

TEST(Circle, ckekSetFerence_GetArea_0) {
    Circle circle;
    circle.setFerence(0);
    EXPECT_NEAR(circle.getArea(), 0, EPS);
}

TEST(Circle, ckekSetArea_GetRadius_0) {
    Circle circle;
    circle.setArea(0);
    EXPECT_NEAR(circle.getRadius(), 0, EPS);
}

TEST(Circle, ckekSetArea_GetFerence_0) {
    Circle circle;
    circle.setArea(0);
    EXPECT_NEAR(circle.getFerence(), 0, EPS);
}


TEST(Circle, ckekSetRadius_GetFerence_negativ) {
    Circle circle;
    circle.setRadius(-1);
    EXPECT_NEAR(circle.getFerence(), 0, EPS);
}

TEST(Circle, ckekSetRadius_GetArea_negative) {
    Circle circle;
    circle.setRadius(-1);
    EXPECT_NEAR(circle.getArea(), 0, EPS);
}

TEST(Circle, ckekSetFerence_GetRadius_negative) {
    Circle circle;
    circle.setFerence(-1);
    EXPECT_NEAR(circle.getRadius(), 0, EPS);
}

TEST(Circle, ckekSetFerence_GetArea_negative) {
    Circle circle;
    circle.setFerence(-1);
    EXPECT_NEAR(circle.getArea(), 0, EPS);
}

TEST(Circle, ckekSetArea_GetRadius_negative) {
    Circle circle;
    circle.setArea(-1);
    EXPECT_NEAR(circle.getRadius(), 0, EPS);
}

TEST(Circle, ckekSetArea_GetFerence_negative) {
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
