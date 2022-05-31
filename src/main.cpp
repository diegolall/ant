#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <ant.hpp>

//To run, juste type "make && bin/main"

int main()  {
    sf::RenderWindow window(sf::VideoMode(800,600), "main_window"); //opening window
    std::vector<Ant> ant_vec;

    while(window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close(); //close window if i press the cross
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape) window.close(); //closing window if escape is pressed
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Right) {
                    Ant ant;
                    ant.x = event.mouseButton.x;
                    ant.y = event.mouseButton.y;
                    ant_vec.push_back(ant);
                    std::cout << "test";
                }
            }
        }
        window.clear(sf::Color::Black);// making the window black
        for(Ant& a :ant_vec){
            a.draw_ant(window);
        }
        window.display();
        }
    return 0;
}