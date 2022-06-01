#include <SFML/Graphics.hpp>
#include <colony/colony.hpp>
#include <common/event_handler.hpp>
#include <display/display.hpp>

//To run, juste type "make && bin/main"

int main()  {
    display screen;
    screen.init_win(1000,800);
    Colony colony;
    Event_Handler handler;

    while(screen.window.isOpen()){
        screen.window.clear(sf::Color::Black);// making the window black
        handler.event_check(screen.window,colony);
        screen.draw_ant(colony);
        screen.window.display();
        }
    return 0;
}