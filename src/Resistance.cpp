#include "Resistance.hpp"

Resistance::Resistance(double resistance): Component("Resistance") {
    if (resistance < 0) {
        throw InvalidResistanceException();
    }
    this->resistance = resistance;
}

double Resistance::get_resistance() const {
    return this->resistance;
}
