// Created by ld on 6/1/22.

#ifndef ANT_EVENT_HANDLER_HPP
#define ANT_EVENT_HANDLER_HPP
#include <SFML/Graphics.hpp>

class Event_Handler{
public:
    sf::Event event;

    void event_check(sf::RenderWindow& window, std::vector<Ant>& ant_vec) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close(); //close window if i press the cross

            if (event.type == sf::Event::KeyPressed) {//Keyboard button
                if (event.key.code == sf::Keyboard::Escape) window.close(); //closing window if escape is pressed
            }

            if (event.type == sf::Event::MouseButtonPressed) { //Mouse
                if (event.mouseButton.button == sf::Mouse::Right) {
                    Ant ant;
                    ant.x = event.mouseButton.x;
                    ant.y = event.mouseButton.y;
                    ant_vec.push_back(ant);
                    std::cout << "test";
                }
            }
        }
    }
};

#endif //ANT_EVENT_HANDLER_HPP
