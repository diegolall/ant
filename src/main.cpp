#include <SFML/Graphics.hpp>
#include <iostream>

//To run, juste type "make && bin/main"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 700), "SFML works!");
    sf::CircleShape shape(300.f);
    shape.setFillColor(sf::Color::Yellow);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}