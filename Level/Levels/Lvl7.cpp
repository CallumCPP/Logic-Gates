#include "Lvl7.h"

Lvl7::Lvl7(){
    Button* btn1 = new Button(0, 350);
    Button* btn2 = new Button(0, 400);
    btn2->setState(true);
    Gates::Xnor* xnor1 = new Gates::Xnor(356, 375, btn1, btn2);
    finish = new Finish(750, 375, xnor1);
    objects.push_back(btn1);
    objects.push_back(btn2);
    objects.push_back(xnor1);
    objects.push_back(finish);
}
