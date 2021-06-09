#include "Circuit.hpp"

#include <iostream>
#include <iomanip>
#include <utility>

Circuit::Circuit(const std::string& name) : Component(name), components() {

}

Circuit::Circuit(const std::string &name, const std::vector<std::shared_ptr<Component>>& components): Circuit(name) {
    for (auto& component : components) {
        this->components.emplace_back(component->clone());
    }
} 

void Circuit::add_component(const Component& component) {
    this->components.emplace_back(std::move(component.clone()));
}

void Circuit::print() {
    std::cout << "Circuit " << this->get_name() << " " << "[ " << std::fixed << std::setprecision(2)
              << this->get_resistance() << " Ohm ]" << std::endl;
    for (auto& component : this->components) {
        std::cout << "Component " << component->get_name() << " " << "[ " << std::fixed << std::setprecision(2)
                  << component->get_resistance() << " Ohm ]" << std::endl;
    }
}
