//
// Created by Fabian Terhorst on 10.05.21.
//

#ifndef PRAKTIKUM_2_CIRCUIT_HPP
#define PRAKTIKUM_2_CIRCUIT_HPP

#include "Component.hpp"
#include <vector>

class Circuit : public Component {
protected:
    std::vector<Component> components;
public:
    explicit Circuit(const std::string& name);
    void add_component(const Component& component);
    void print();
};


#endif //PRAKTIKUM_2_CIRCUIT_HPP
