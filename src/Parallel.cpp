#include "Parallel.hpp"

Parallel::Parallel(): Circuit("Parallel") {

}

double Parallel::get_resistance() const {
    double resistance = 0;
    for (auto& component : this->components) {
        resistance += 1.0 / component->get_resistance();
    }
    return 1.0 / resistance;
}
