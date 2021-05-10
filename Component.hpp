//
// Created by Fabian Terhorst on 10.05.21.
//

#ifndef PRAKTIKUM_2_COMPONENT_HPP
#define PRAKTIKUM_2_COMPONENT_HPP

#include <string>

class Component {
private:
    std::string name;
    double resistance;

public:
    Component(std::string name, double resistance);

    [[nodiscard]] std::string get_name() const;

    [[nodiscard]] virtual double get_resistance() const;
};


#endif //PRAKTIKUM_2_COMPONENT_HPP
