#pragma once

#include "Component.hpp"
#include "InvalidResistanceException.hpp"

/**
 * VoltageSource Component that has a name and a final resistance.
 */
class VoltageSource: public Component {
private:
    double resistance;
public:
    /**
     * Creates a VoltageSource with a final resistance.
     *
     * @param resistance resistance to set.
     */
    explicit VoltageSource(double resistance);

    /**
     * Get the resistance of the VoltageSource component.
     *
     * @return the resistance of the VoltageSource component.
     */
    [[nodiscard]] double get_resistance() const override;

    [[nodiscard]] std::shared_ptr<Component> clone() const override;
};
