// Created by ld on 31/05/22.
#ifndef ANT_ANT_HPP
#define ANT_ANT_HPP

#include <SFML/Graphics.hpp>
#include <iostream>

class Ant{
    public:
    float x,y; //coord

    void draw_ant(sf::RenderWindow& window){ //draw a ant by pressing the right mouse button

        sf::Texture ant_texture;
        if(!ant_texture.loadFromFile("res/ant_2.png")){
            std::cout <<"error while loading the file";
            std::terminate();
        }

        sf::Sprite ant_sprite;
        ant_sprite.setTexture(ant_texture);
        ant_sprite.setPosition(this->x,this->y);
        ant_sprite.setColor(sf::Color::Yellow); //ant color
        window.draw(ant_sprite);
    }
};

#endif //ANT_ANT_HPP
