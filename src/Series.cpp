#include "Series.hpp"

Series::Series(): Circuit("Series") {

}

double Series::get_resistance() const {
    double resistance = 0;
    for (auto& component : this->components) {
        resistance += component->get_resistance();
    }
    return resistance;
}
