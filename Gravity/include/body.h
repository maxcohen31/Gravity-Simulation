#ifndef BODY_H
#define BODY_H

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>


// Body definition
class Body
{
    public:
        // Constructor
        Body(float positionX, float positionY, float force);        
        // Methods
        void draw(sf::RenderWindow& window);
        float getForce();
        sf::Vector2f getPosition();

    private:
        float bodyForce;
        sf::Vector2f position;
        sf::CircleShape shape;
};

#endif
