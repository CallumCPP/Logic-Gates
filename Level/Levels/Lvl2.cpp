#include "Lvl2.h"

Lvl2::Lvl2(){
    Button* btn1 = new Button(0, 350);
    Button* btn2 = new Button(0, 400);
    Gates::And* and1 = new Gates::And(356, 375, btn1, btn2);
    finish = new Finish(750, 375, and1);
    objects.push_back(btn1);
    objects.push_back(btn2);
    objects.push_back(and1);
    objects.push_back(finish);
}
