#ifndef OBJECT
#define OBJECT
#include "Platform/Platform.hpp"

class Object {
public:
    Object(){};
    virtual void tick(sf::RenderWindow* w){};
    std::vector<Object*> inputs;
    std::vector<sf::Vector2u> inputPos;
    bool state = false;
    int identifier;
    int typeID;
    sf::Vector2u pos;
    sf::Vector2u outputPos;
};

#endif /* OBJECT */
