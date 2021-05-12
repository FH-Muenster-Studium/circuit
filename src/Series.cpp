//
// Created by Fabian Terhorst on 10.05.21.
//

#include "Series.hpp"

Series::Series(): Circuit("Series") {

}

double Series::get_resistance() const {
    double resistance = 0;
    for (const Component& component : this->components) {
        resistance += component.get_resistance();
    }
    return resistance;
}
