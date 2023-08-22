#ifndef PLANET_H
#define PLANET_H

#include "body.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Vulkan.hpp>


class Planet
{
    public:
        Planet(float positionX, float positionY, float velX, float velY, sf::Color col);
        
        void drawPlanet(sf::RenderWindow& window);
        void applyForce(Body& b);
        

    private:
        sf::CircleShape pShape;
        sf::Vector2f velocity;
        sf::Vector2f position;
        sf::Color color;
};

#endif
