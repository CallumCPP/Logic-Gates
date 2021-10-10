#include "Button.h"

Button::Button(int x, int y){
    this->pos = sf::Vector2u(x, y);
    this->outputPos = sf::Vector2u(x + 50, y + 25);
    this->typeID = 9;
    this->identifier = 1;
}

void Button::setState(bool state){
    this->state = state;
    this->typeID = 9 + state;
}

void Button::tick(sf::RenderWindow* w){
    if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){
        int x = sf::Mouse::getPosition(*w).x;
        int x1 = this->pos.x;
        int x2 = x1 + 50;
               
        int y = sf::Mouse::getPosition(*w).y;
        int y1 = this->pos.y;
        int y2 = y1 + 50;

        if (x > x1 and x < x2 and y > y1 and y < y2){
            this->setState(!state);
        }
    }
}
