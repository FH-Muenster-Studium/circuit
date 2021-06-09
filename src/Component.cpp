#include "Component.hpp"

#include <iostream>
#include <utility>

Component::Component(std::string name) : name(std::move(name)) {

}

std::string Component::get_name() const {
    return this->name;
}