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
     * Creates a Parallel Circuit with a predefined array of components
     */
    explicit Series(std::vector<std::shared_ptr<Component>> components);

    /**
     * Get the resistance of the Series Circuit.
     *
     * @return the resistance of the Series Circuit.
     */
    [[nodiscard]] double get_resistance() const override;

    [[nodiscard]] std::shared_ptr<Component> clone() const override;
};
