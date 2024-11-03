#include "draw.hpp"

namespace Draw
{
    void draw(sf::RenderWindow &window, e_shapes shape_type)
    {
        switch (shape_type)
        {
            case e_shapes::circle:
            {
                sf::CircleShape shape(50.f);
                shape.setFillColor(sf::Color::Green);

                window.draw(shape);
                break;
            }
            default:
                fmt::print("Invalid shape\n");
                break;
        }
    }
} // namespace Draw
