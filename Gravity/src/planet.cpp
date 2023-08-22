#include "body.h"
#include "planet.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <cmath>


Planet::Planet(float positionX, float positionY, float velX, float velY, sf::Color col): position{positionX, positionY}, velocity{velX, velY}, color{col}
{
    pShape.setPosition(position);
    pShape.setRadius(8);
    pShape.setFillColor(color);
}

void Planet::drawPlanet(sf::RenderWindow& window)
{
    pShape.setPosition(position);
    return window.draw(pShape);
}

void Planet::applyForce(Body& b)
{   

    // Vector normalization
    float distanceX = b.getPosition().x - position.x;
    float distanceY = b.getPosition().y - position.y;
    float dist = std::sqrt(distanceX * distanceX + distanceY * distanceY);
    
    float inverseDist = 1.0f / dist;
    float normalizedX = inverseDist * distanceX;
    float normalizedY = inverseDist * distanceY;
    
    float distanceSqr = inverseDist * inverseDist;
    
    float accX = normalizedX * b.getForce() * distanceSqr;
    float accY = normalizedY * b.getForce() * distanceSqr;
    
    velocity.x += accX;
    velocity.y += accY;

    position.x += velocity.x;
    position.y += velocity.y;
}


