#include "Component.hpp"

Component::Component(std::string name): name(name) {

}

std::string Component::get_name() const {
    return this->name;
}