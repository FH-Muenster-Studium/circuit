#include "Component.hpp"

Component::Component(const std::string &name) : name(name) {

}

std::string Component::get_name() const {
    return this->name;
}