#include "Series.hpp"
#include "Parallel.hpp"
#include "Resistance.hpp"
#include "VoltageSource.hpp"

int main() {
    Series series{};
    series.add_component(VoltageSource{10});
    series.add_component(Resistance{1});
    series.add_component(Resistance{5});
    series.add_component(Resistance{7});
    series.print();

    Parallel parallel{};
    parallel.add_component(VoltageSource{10});
    parallel.add_component(Resistance{1});
    parallel.add_component(Resistance{5});
    parallel.add_component(Resistance{7});
    parallel.print();
    return 0;
}
