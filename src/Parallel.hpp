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
     * Get the resistance of the parallel circuit.
     *
     * @return the resistance of the parallel circuit.
     */
    [[nodiscard]] double get_resistance() const override;
};
