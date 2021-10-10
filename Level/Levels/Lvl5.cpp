#include "Lvl5.h"

Lvl5::Lvl5(){
    Button* btn1 = new Button(0, 350);
    Button* btn2 = new Button(0, 400);
    Gates::Or* or1 = new Gates::Or(356, 375, btn1, btn2);
    finish = new Finish(750, 375, or1);
    objects.push_back(btn1);
    objects.push_back(btn2);
    objects.push_back(or1);
    objects.push_back(finish);
}
