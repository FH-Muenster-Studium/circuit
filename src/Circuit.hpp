#pragma once

#include "Component.hpp"
#include <vector>
#include <memory>

/**
 * Circuit that contains a list of components.
 */
class Circuit : public Component {
protected:
    std::vector<std::shared_ptr<Component>> components;
    Circuit(const std::string &name, std::vector<std::shared_ptr<Component>> components);
public:
    /**
     * Creates a circuit.
     *
     * @param name name of the circuit.
     */
    explicit Circuit(const std::string &name);

    /**
     * Add Component to the circuit.
     *
     * @param component Component to add.
     */
    void add_component(const Component &component);

    /**
     * Prints out information's of the currently added components.
     */
    void print();

    /**
     * Get the resistance of the circuit.
     *
     * @return the resistance of the component.
     */
    [[nodiscard]] double get_resistance() const override = 0;

    [[nodiscard]] std::shared_ptr<Component> clone() const override = 0;
};