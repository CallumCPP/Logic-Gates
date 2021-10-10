#include "Not.h"

Gates::Not::Not(int x, int y, Object* in) {
    this->typeID = 3;
    this->pos = sf::Vector2u(x, y);
    this->inputs.push_back(in);
    this->inputPos.push_back(sf::Vector2u(x, y + 24));
    this->outputPos = sf::Vector2u(x + 88, y + 24);
}

void Gates::Not::tick(sf::RenderWindow* w){
    this->state = !inputs[0]->state;
}