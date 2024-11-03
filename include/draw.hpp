#pragma once

#include <SFML/Graphics.hpp>
#include <fmt/core.h>

namespace Draw
{
    enum e_shapes {
        circle,
        rectangle
    };

    void draw(sf::RenderWindow &window, e_shapes shape);
} // namespace Draw