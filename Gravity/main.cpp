#include "planet.h"
#include "body.h"
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 1000), "Gravity Simulation");
    window.setFramerateLimit(60);

    Body b1(600, 500, 8000);
    Planet p1(600, 700, 4, 1, sf::Color::Blue);
    Planet p2(700, 800, 4 , -1, sf::Color::Red);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        p1.applyForce(b1);
        p2.applyForce(b1);
        b1.draw(window);
        p1.drawPlanet(window);
        p2.drawPlanet(window);
        window.display();
    }

    return 0;
}
