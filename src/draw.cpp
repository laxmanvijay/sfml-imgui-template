#include "draw.hpp"

namespace Draw
{
    void draw(sf::RenderWindow &window, e_shapes shape)
    {
        switch (shape)
        {
        case e_shapes::circle:
            fmt::print("Drawing circle\n");
        
            sf::CircleShape shape(50.f);
            shape.setFillColor(sf::Color::Green);

            window.draw(shape);
            break;
        }
    }
} // namespace Draw
