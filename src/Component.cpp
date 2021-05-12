//
// Created by Fabian Terhorst on 10.05.21.
//

#include "Component.hpp"

Component::Component(std::string name, double resistance): name(name), resistance(resistance) {

}

std::string Component::get_name() const {
    return this->name;
}

double Component::get_resistance() const {
    return resistance;
}
