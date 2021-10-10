#ifndef LEVEL_LEVEL
#define LEVEL_LEVEL
#include <vector>
#include <iostream>
#include "../Object.h"
#include "../Button.h"
#include "../Finish.h"
#include "../Gate/Gates.h"

class Level {
public:
    Level();
    bool display(sf::RenderWindow* window);
    std::vector<sf::Texture*> textures;
    std::vector<Object*> objects;
    sf::Vector2u winSize = sf::Vector2u(800, 800);
    Finish* finish;
};

#endif /* LEVEL_LEVEL */
