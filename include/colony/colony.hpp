// Created by ld on 6/1/22.
#ifndef ANT_C_HPP
#define ANT_C_HPP

#include <vector>
#include "ant.hpp"
#include <SFML/Graphics.hpp>

class Colony{
public:
    sf::Color col_color;
    std::vector<Ant> ants;
};

#endif //ANT_C_HPP
