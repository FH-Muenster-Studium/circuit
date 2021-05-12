//
// Created by Fabian Terhorst on 10.05.21.
//

#ifndef PRAKTIKUM_2_SERIES_HPP
#define PRAKTIKUM_2_SERIES_HPP

#include "Circuit.hpp"

class Series : public Circuit {
public:
    Series();
    [[nodiscard]] double get_resistance() const override;
};


#endif //PRAKTIKUM_2_SERIES_HPP
