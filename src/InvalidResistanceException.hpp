#pragma once

/**
 * This Exception is thrown when a resistance with a negative resistance is created.
 */
struct InvalidResistanceException : public std::exception {
    [[nodiscard]] const char *what() const noexcept override {
        return "Resistance should not be negative";
    }
};