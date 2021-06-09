#pragma once

#include "Component.hpp"
#include "InvalidResistanceException.hpp"

/**
 * Resistance Component that has a name and a final resistance
 */
class Resistance : public Component {
private:
    double resistance;
public:
    /**
     * Create a Resistance Component
     */
    explicit Resistance(double resistance);

    /**
     * Get the resistance of the Resistance component.
     *
     * @return the resistance of the Resistance component.
     */
    [[nodiscard]] double get_resistance() const override;

    [[nodiscard]] std::shared_ptr<Component> clone() const override;
};