#include "Circuit.hpp"

#include <iostream>
#include <iomanip>

Circuit::Circuit(const std::string& name) : Component(name), components() {

}

void Circuit::add_component(const Component& component) {
    this->components.push_back(const_cast<Component*>(&component));
}

void Circuit::print() {
    std::cout << "Circuit " << this->get_name() << " " << "[ " << std::fixed << std::setprecision(2)
              << this->get_resistance() << " Ohm ]" << std::endl;
    for (auto& component : this->components) {
        std::cout << "Component " << component->get_name() << " " << "[ " << std::fixed << std::setprecision(2)
                  << component->get_resistance() << " Ohm ]" << std::endl;
    }
}
