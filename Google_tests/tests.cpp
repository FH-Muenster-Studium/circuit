//
// Created by Fabian Terhorst on 12.05.21.
//

#include "gtest/gtest.h"

#include "Series.hpp"
#include "Parallel.hpp"

TEST (SeriesTest, Resistance) {
    Series series;
    Component c1("", 1);
    Component c2("", 2);
    Component c3("", 3);
    series.add_component(c1);
    series.add_component(c2);
    series.add_component(c3);
    double r = c1.get_resistance() + c2.get_resistance() + c3.get_resistance();
    ASSERT_EQ (r, series.get_resistance());
}

TEST (ParallelTest, Resistance) {
    Parallel parallel;
    Component c1("", 1);
    Component c2("", 2);
    Component c3("", 3);
    parallel.add_component(c1);
    parallel.add_component(c2);
    parallel.add_component(c3);
    double r = 1 / (1 / c1.get_resistance() + 1 / c2.get_resistance() + 1 / c3.get_resistance());
    ASSERT_EQ (r, parallel.get_resistance());
}