//
// Created by Fabian Terhorst on 10.05.21.
//

#include "Parallel.hpp"

Parallel::Parallel(): Circuit("Parallel") {

}

double Parallel::get_resistance() const {
    double resistance = 0;
    for (const Component& component : this->components) {
        resistance += 1.0 / component.get_resistance();
    }
    return 1.0 / resistance;
}
