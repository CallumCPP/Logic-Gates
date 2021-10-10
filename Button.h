#ifndef BUTTON
#define BUTTON
#include "Platform/Platform.hpp"
#include "Object.h"

class Button : public Object {
public:
    Button(int x, int y);
    void setState(bool state);
    void tick(sf::RenderWindow* w) override;
};

#endif /* BUTTON */
