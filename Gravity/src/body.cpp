#include "body.h"
#include "planet.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <cmath>


// Constructor implementation
Body::Body(float positionX, float positionY, float force) : position{positionX, positionY}, bodyForce{force}
{   

    shape.setPosition(position);
    shape.setFillColor(sf::Color::Yellow);
    shape.setRadius(15);

}

void Body::draw(sf::RenderWindow& window)
{
    return window.draw(shape);
}


sf::Vector2f Body::getPosition()
{
    return position;
}

float Body::getForce()
{
    return bodyForce;
}
