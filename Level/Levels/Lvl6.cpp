#include "Lvl6.h"

Lvl6::Lvl6(){
    Button* btn1 = new Button(0, 350);
    Button* btn2 = new Button(0, 400);
    Gates::Xor* xor1 = new Gates::Xor(356, 375, btn1, btn2);
    finish = new Finish(750, 375, xor1);
    objects.push_back(btn1);
    objects.push_back(btn2);
    objects.push_back(xor1);
    objects.push_back(finish);
}
