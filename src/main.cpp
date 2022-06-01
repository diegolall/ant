#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "colony/ant.hpp"
#include <common/event_handler.hpp>

//To run, juste type "make && bin/main"

int main()  {
    sf::RenderWindow window(sf::VideoMode(800,600), "main_window"); //opening window
    std::vector<Ant> ant_vec; //Replace in the future by a colony (big class)
    Event_Handler handler;

    while(window.isOpen()){
        window.clear(sf::Color::Black);// making the window black
        handler.event_check(window,ant_vec);
        for(Ant& a :ant_vec){
            a.draw_ant(window);
        }
        window.display();
        }
    return 0;
}