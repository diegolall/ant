// Created by ld on 6/1/22.

#ifndef ANT_EVENT_HANDLER_HPP
#define ANT_EVENT_HANDLER_HPP
#include <SFML/Graphics.hpp>
#include <colony/ant.hpp>
#include <colony/colony.hpp>

class Event_Handler{
public:
    sf::Event event;

    void event_check(sf::RenderWindow& window,  Colony& colony) {
        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close(); //close window if i press the cross
                    break;

                case sf::Event::KeyPressed: //Keyboard button
                    if (event.key.code == sf::Keyboard::Escape) window.close(); //closing window if escape is pressed
                    break;

                case sf::Event::MouseButtonPressed://Mouse
                    if (event.mouseButton.button == sf::Mouse::Left) {
                        Ant ant;
                        ant.x = event.mouseButton.x;
                        ant.y = event.mouseButton.y;
                        colony.ants.push_back(ant);
                    }
                    break;
            }
        }
    }
};

#endif //ANT_EVENT_HANDLER_HPP
