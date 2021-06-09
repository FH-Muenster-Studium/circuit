#include "VoltageSource.hpp"

VoltageSource::VoltageSource(double resistance): Component("VoltageSource") {
    if (resistance < 0) {
        throw InvalidResistanceException();
    }
    this->resistance = resistance;
}

double VoltageSource::get_resistance() const {
    return this->resistance;
}

std::shared_ptr<Component> VoltageSource::clone() const {
    return std::make_shared<VoltageSource>(this->get_resistance());
}
