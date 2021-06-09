#include "Parallel.hpp"

Parallel::Parallel(): Circuit("Parallel") {

}

Parallel::Parallel(std::vector<std::shared_ptr<Component>> components): Circuit("Parallel", components) {

}

double Parallel::get_resistance() const {
    double resistance = 0;
    for (auto& component : this->components) {
        resistance += 1.0 / component->get_resistance();
    }
    return 1.0 / resistance;
}

std::shared_ptr<Component> Parallel::clone() const {
    return std::make_shared<Parallel>(components);
}
