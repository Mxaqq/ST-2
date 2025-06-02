// Copyright 2022 UNN-CS
#ifndef INCLUDE_TASKS_H_
#define INCLUDE_TASKS_H_

#include "circle.h"

const double EARTH_RADIUS = 6378100.0;
const double POOL_RADIUS = 3.0;
const double PATH_WIDTH = 1.0;
const double CONCRETE_PRICE = 1000.0;
const double FENCE_PRICE = 2000.0;

double Earth();
double track_cost();

#endif  // INCLUDE_TASKS_H_
