#include "Xor.h"

Gates::Xor::Xor(int x, int y, Object* in1, Object* in2) {
    this->typeID = 6;
    this->pos = sf::Vector2u(x, y);
    this->inputPos.push_back(sf::Vector2u(x, y + 14));
    this->inputPos.push_back(sf::Vector2u(x, y + 34));
    this->outputPos = sf::Vector2u(x + 88, y + 24);
}

void Gates::Xor::tick(sf::RenderWindow* w) {
    this->state = (inputs[0]->state != inputs[1]->state);
}