//
// Created by Fabian Terhorst on 10.05.21.
//

#ifndef PRAKTIKUM_2_PARALLEL_HPP
#define PRAKTIKUM_2_PARALLEL_HPP

#include "Circuit.hpp"

class Parallel : public Circuit {
public:
    Parallel();
    [[nodiscard]] double get_resistance() const override;
};


#endif //PRAKTIKUM_2_PARALLEL_HPP
