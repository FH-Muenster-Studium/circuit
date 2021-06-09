#pragma once

#include "Circuit.hpp"

/**
 * Series Circuit
 */
class Series : public Circuit {
public:
    /**
     * Create a Series Circuit
     */
    Series();

    /**
     * Get the resistance of the Series Circuit.
     *
     * @return the resistance of the Series Circuit.
     */
    [[nodiscard]] double get_resistance() const override;
};
