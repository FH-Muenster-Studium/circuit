//
// Created by Fabian Terhorst on 10.05.21.
//

#include "Circuit.hpp"

#include <iostream>
#include <iomanip>

Circuit::Circuit(std::string name) : Component(name, 0), components() {

}

void Circuit::add_component(Component component) {
    this->components.push_back(component);
}

void Circuit::print() {
    std::cout << "Circuit " << this->get_name() << " " << "[ " << std::fixed << std::setprecision(2)
              << this->get_resistance() << " Ω ]" << std::endl;
    for (Component component : this->components) {
        std::cout << "Component " << component.get_name() << " " << "[ " << std::fixed << std::setprecision(2)
                  << component.get_resistance() << " Ω ]" << std::endl;
    }
}
