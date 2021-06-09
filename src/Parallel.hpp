#pragma once

#include "Circuit.hpp"

/**
 * Parallel Circuit
 */
class Parallel : public Circuit {
public:
    /**
     * Creates a Parallel Circuit
     */
    Parallel();

    /**
     * Creates a Parallel Circuit with a predefined array of components
     */
    explicit Parallel(std::vector<std::shared_ptr<Component>> components);

    /**
     * Get the resistance of the parallel circuit.
     *
     * @return the resistance of the parallel circuit.
     */
    [[nodiscard]] double get_resistance() const override;

    [[nodiscard]] std::shared_ptr<Component> clone() const override;
};
