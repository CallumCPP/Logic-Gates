#ifndef FINISH
#define FINISH
#include "Platform/Platform.hpp"
#include "Object.h"

class Finish : public Object {
public:
    Finish(int x, int y, Object* in);
    Finish(){};
    void tick(sf::RenderWindow* w) override;
};


#endif /* FINISH */
