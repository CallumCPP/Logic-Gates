#include "Lvl3.h"

Lvl3::Lvl3(){
    Button* btn1 = new Button(0, 350);
    Button* btn2 = new Button(0, 400);
    btn1->setState(true);
    btn2->setState(true);
    Gates::Nand* nand1 = new Gates::Nand(356, 375, btn1, btn2);
    finish = new Finish(750, 375, nand1);
    objects.push_back(btn1);
    objects.push_back(btn2);
    objects.push_back(nand1);
    objects.push_back(finish);
}
