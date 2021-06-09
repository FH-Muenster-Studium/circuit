#include "gtest/gtest.h"

#include "Series.hpp"
#include "Parallel.hpp"
#include "Resistance.hpp"
#include "VoltageSource.hpp"

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
    series.add_component(Resistance {r1});
    series.add_component(Resistance {r2});
    series.add_component(VoltageSource {r3});
    double r = r1 + r2 + r3;
    ASSERT_EQ (r, series.get_resistance());
}

TEST (ParallelTest, Resistance) {
    double r1 = get_random_double();
    double r2 = get_random_double();
    double r3 = get_random_double();
    Parallel parallel;
    Resistance c1(r1);
    Resistance c2(r2);
    VoltageSource c3(r3);
    parallel.add_component(c1);
    parallel.add_component(c2);
    parallel.add_component(c3);
    double r = 1 / (1 / r1 + 1 / r2 + 1 / r3);
    ASSERT_EQ (r, parallel.get_resistance());
}

TEST (CircuitInnerTest, Resistance) {
    double r1 = get_random_double();
    double r2 = get_random_double();
    double r3 = get_random_double();
    double r4 = get_random_double();
    double r5 = get_random_double();
    Parallel parallel;
    Resistance c1(r1);
    Resistance c2(r2);
    VoltageSource c3(r3);
    parallel.add_component(c1);
    parallel.add_component(c2);
    Series series;
    Resistance c4(r4);
    VoltageSource c5(r5);
    series.add_component(c4);
    series.add_component(c5);
    parallel.add_component(c3);
    parallel.add_component(series);
    double r = 1 / (1 / r1 + 1 / r2 + 1 / r3 + 1 / (r4 + r5));
    ASSERT_EQ (r, parallel.get_resistance());
}

TEST(NegativeResistanceException, invalidResistance)
{
    try {
        Resistance c1(-1);
        FAIL() << "Expected InvalidResistanceException";
    }
    catch(InvalidResistanceException const & err) {
        EXPECT_EQ(err.what(),std::string("Resistance should not be negative"));
    }
    catch(...) {
        FAIL() << "Expected InvalidResistanceException";
    }
}