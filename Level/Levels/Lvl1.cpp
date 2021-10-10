#include "Lvl1.h"

Lvl1::Lvl1(){
    Button* btn1 = new Button(0, 375);
    btn1->setState(true);
    Gates::Not* not1 = new Gates::Not(356, 375, btn1);
    finish = new Finish(750, 375, not1);
    objects.push_back(btn1);
    objects.push_back(not1);
    objects.push_back(finish);
}
