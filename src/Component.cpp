#include "Component.hpp"

#include <iostream>

Component::Component(const std::string &name) : name(name) {

}

std::string Component::get_name() const {
    return this->name;
}

Component::~Component() {
    std::cout << "destruct component " << get_name() << std::endl;
}
