//
// Created by Fabian Terhorst on 12.05.21.
//

#include "gtest/gtest.h"

#include "Series.hpp"
#include "Parallel.hpp"

#include <random>

double get_random_double() {
    double lower_bound = 0;
    double upper_bound = 100;
    std::uniform_real_distribution<double> unif(lower_bound,upper_bound);
    std::default_random_engine re;
    return unif(re);
}

TEST (SeriesTest, Resistance) {
    double r1 = get_random_double();
    double r2 = get_random_double();
    double r3 = get_random_double();
    Series series;
    Component c1("", r1);
    Component c2("", r2);
    Component c3("", r3);
    series.add_component(c1);
    series.add_component(c2);
    series.add_component(c3);
    double r = r1 + r2 + r3;
    ASSERT_EQ (r, series.get_resistance());
}

TEST (ParallelTest, Resistance) {
    double r1 = get_random_double();
    double r2 = get_random_double();
    double r3 = get_random_double();
    Parallel parallel;
    Component c1("", r1);
    Component c2("", r2);
    Component c3("", r3);
    parallel.add_component(c1);
    parallel.add_component(c2);
    parallel.add_component(c3);
    double r = 1 / (1 / r1 + 1 / r2 + 1 / r3);
    ASSERT_EQ (r, parallel.get_resistance());
}