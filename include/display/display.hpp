// Created by ld on 6/1/22.
#ifndef ANT_DISPLAY_HPP
#define ANT_DISPLAY_HPP
#include <SFML/Graphics.hpp>


class display {
public:
    sf::RenderWindow window;
    double height,width;
    sf::Sprite ant_sprite;
    sf::Texture ant_texture;

    bool init_win(double height,double width){ //create window
        this->height =height;
        this->width =width;
        window.create(sf::VideoMode(this->height,this->width),"main_window");
        this->set_texture();
        return false;
    }


    void set_texture(){
        if(!ant_texture.loadFromFile("res/ant_2.png")){
            std::cout <<"error while loading the file";
            std::terminate();
        }
    }

    void draw_ant(Colony& colony){
        for(Ant& a:colony.ants){
            ant_sprite.setTexture(ant_texture);
            ant_sprite.setColor(sf::Color::Yellow); //ant color
            ant_sprite.setPosition(a.x,a.y);
            window.draw(ant_sprite);
        }
    }
};


#endif //ANT_DISPLAY_HPP
