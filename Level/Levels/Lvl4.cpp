#include "Lvl4.h"

Lvl4::Lvl4(){
    Button* btn1 = new Button(0, 350);
    Button* btn2 = new Button(0, 400);
    btn1->setState(true);
    btn2->setState(true);
    Gates::Nor* nor1 = new Gates::Nor(356, 375, btn1, btn2);
    finish = new Finish(750, 375, nor1);
    objects.push_back(btn1);
    objects.push_back(btn2);
    objects.push_back(nor1);
    objects.push_back(finish);
}
