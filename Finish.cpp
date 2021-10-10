#include "Finish.h"

Finish::Finish(int x, int y, Object* in){
    this->inputs.push_back(in);
    this->typeID = 7;
    this->pos = sf::Vector2u(x, y);
    this->inputPos.push_back(sf::Vector2u(x, y + 25));
    this->identifier = 2;
}

void Finish::tick(sf::RenderWindow* w){
    if (inputs.size()){
        this->state = inputs[0]->state;
        this->typeID = 7 + state;
    }
}