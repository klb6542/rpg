#include <iostream>
#include <SFML/OpenGL.hpp>
#include <SFML/Audio.hpp>
#include "SFML/Graphics.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "RPG");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                std::cout << "Pressed a on keyboard" << std::endl;
            }

            window.clear();
            sf::CircleShape square(80.f, 4);
            window.draw(square);
            window.display();
        }
    }

    return EXIT_SUCCESS;
}