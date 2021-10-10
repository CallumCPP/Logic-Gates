#include "Lvl8.h"

Lvl8::Lvl8(){
    Button* btn1 = new Button(0, 125);
    Button* btn2 = new Button(0, 225);
    Button* btn3 = new Button(0, 325);
    Button* btn4 = new Button(0, 425);
    Button* btn5 = new Button(0, 525);
    Button* btn6 = new Button(0, 625);
    Gates::Not* not1 = new Gates::Not(200, 125, btn1);
    Gates::And* and1 = new Gates::And(400, 175, not1, btn2);
    Gates::And* and2 = new Gates::And(500, 275, and1, btn3);

    Gates::Not* not2 = new Gates::Not(200, 425, btn4);
    Gates::Not* not3 = new Gates::Not(300, 625, btn6);
    Gates::And* and3 = new Gates::And(400, 575, btn5, not3);
    Gates::And* and4 = new Gates::And(500, 475, not2, and3);

    Gates::And* and5 = new Gates::And(600, 375, and2, and4);
    finish = new Finish(750, 375, and5);

    objects.push_back(btn1);
    objects.push_back(btn2);
    objects.push_back(btn3);
    objects.push_back(btn4);
    objects.push_back(btn5);
    objects.push_back(btn6);

    objects.push_back(not1);
    objects.push_back(and1);
    objects.push_back(and2);

    objects.push_back(not2);
    objects.push_back(not3);
    objects.push_back(and3);
    objects.push_back(and4);
    
    objects.push_back(and5);
    objects.push_back(finish);
}
