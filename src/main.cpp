#include "Series.hpp"
#include "Parallel.hpp"
#include "Resistance.hpp"
#include "VoltageSource.hpp"

#include <iostream>

int main() {
    Series series{};
    series.add_component(VoltageSource{0});
    series.add_component(Resistance{200});
    series.add_component(Resistance{100});
    series.add_component(Resistance{500});
    try {
        series.add_component(Resistance{-1});
    } catch(InvalidResistanceException& exception) {
        std::cout << exception.what() << std::endl;
    }
    series.print();

    Parallel parallel{};
    parallel.add_component(VoltageSource{10});
    parallel.add_component(Resistance{100});
    parallel.add_component(Resistance{200});
    parallel.add_component(Resistance{17});
    parallel.add_component(series);
    parallel.print();
    return 0;
}
