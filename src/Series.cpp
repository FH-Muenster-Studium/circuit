#include "Series.hpp"

Series::Series(): Circuit("Series") {

}

Series::Series(std::vector<std::shared_ptr<Component>> components): Circuit("Series", components) {

}

double Series::get_resistance() const {
    double resistance = 0;
    for (auto& component : this->components) {
        resistance += component->get_resistance();
    }
    return resistance;
}

std::shared_ptr<Component> Series::clone() const {
    return std::make_shared<Series>(components);
}
