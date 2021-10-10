#include "Lvl9.h"

Lvl9::Lvl9(){
    Button* btn1 = new Button(0, 25);
    Button* btn2 = new Button(0, 125);
    Button* btn3 = new Button(0, 225);
    Button* btn4 = new Button(0, 325);
    Button* btn5 = new Button(0, 425);
    Button* btn6 = new Button(0, 525);
    Button* btn7 = new Button(0, 625);
    Button* btn8 = new Button(0, 725);

    Gates::And* and1 = new Gates::And(100, 75, btn1, btn2);
    Gates::Not* not1 = new Gates::Not(200, 75, and1);
    Gates::And* and2 = new Gates::And(300, 100, not1, btn3);
    Gates::Not* not2 = new Gates::Not(200, 225, btn2);
    Gates::Not* not3 = new Gates::Not(300, 225, not2);
    Gates::And* and3 = new Gates::And(400, 200, and2, not3);

    Gates::Not* not4 = new Gates::Not(100, 325, btn4);
    Gates::And* and4 = new Gates::And(200, 375, not4, btn5);
    Gates::Not* not5 = new Gates::Not(100, 525, btn6);
    Gates::And* and5 = new Gates::And(300, 450, and4, not5);
    Gates::And* and6 = new Gates::And(200, 675, btn7, btn8);
    Gates::And* and7 = new Gates::And(400, 675, and5, and6);
    
    Gates::And* and8 = new Gates::And(600, 375, and3, and7);
    finish = new Finish(750, 375, and8);

    objects.push_back(btn1);
    objects.push_back(btn2);
    objects.push_back(btn3);
    objects.push_back(btn4);
    objects.push_back(btn5);
    objects.push_back(btn6);
    objects.push_back(btn7);
    objects.push_back(btn8);

    objects.push_back(and1);
    objects.push_back(not1);
    objects.push_back(and2);
    objects.push_back(not2);
    objects.push_back(not3);
    objects.push_back(and3);

    objects.push_back(not4);
    objects.push_back(and4);
    objects.push_back(not5);
    objects.push_back(and5);
    objects.push_back(and6);
    objects.push_back(and7);

    objects.push_back(and8);
    objects.push_back(finish);
}
