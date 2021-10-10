#include "Level.h"

Level::Level(){
    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/and.png");

    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/nand.png");

    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/nor.png");

    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/not.png");

    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/or.png");

    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/xnor.png");
    
    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/xor.png");

    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/finish_off.png");

    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/finish_on.png");

    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/button_off.png");

    this->textures.push_back(new sf::Texture);
    this->textures[this->textures.size() - 1]->loadFromFile("Sprites/button_on.png");
}

void drawLine(sf::RenderWindow* w, sf::Vector2u p1, sf::Vector2u p2, int width) {
    for (int i = 0; i < width; i++){
        sf::Vertex line[] = {
            sf::Vertex(sf::Vector2f(p1.x, p1.y + i)),
            sf::Vertex(sf::Vector2f(p2.x, p2.y + i))
        };

        w->draw(line, 2, sf::Lines);
    }
}

bool Level::display(sf::RenderWindow* win){
    for (int i = 0; i < objects.size(); i++) objects[i]->tick(win);

    win->clear();
    for (int i = 0; i < objects.size(); i++){
        sf::Sprite sprite;
        sprite.setTexture(*textures[objects[i]->typeID]);
        sprite.setPosition(objects[i]->pos.x, objects[i]->pos.y);
        win->draw(sprite);
    }
    
    for (int i = 0; i < objects.size(); i++){
        for (int j = 0; j < objects[i]->inputs.size(); j++){
            drawLine(win, objects[i]->inputs[j]->outputPos, objects[i]->inputPos[j], 2);
        }
    }
    
    while (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){}
    win->display();



    return finish->state;
}
