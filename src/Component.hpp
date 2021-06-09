#pragma once

#include <string>
#include <memory>

/**
 * Component that has a name and a resistance.
 */
class Component {
private:
    std::string name;

public:
    /**
     * Creates a component.
     *
     * @param name name of the component.
     */
    explicit Component(std::string name);

    /**
     * Get the name of the component.
     *
     * @return the name of the component.
     */
    [[nodiscard]] std::string get_name() const;

    /**
     * Get the resistance of the component.
     *
     * @return the resistance of the component.
     */
    [[nodiscard]] virtual double get_resistance() const = 0;
};