#include "Lvl10.h"

Lvl10::Lvl10(){
    this->winSize = sf::Vector2u(950, 800);
    Button* btn1 = new Button(0, 100);
    Button* btn2 = new Button(0, 150);
    Button* btn3 = new Button(0, 200);
    Button* btn4 = new Button(0, 250);
    Button* btn5 = new Button(0, 300);
    Button* btn6 = new Button(0, 350);
    Button* btn7 = new Button(0, 400);
    Button* btn8 = new Button(0, 450);
    Button* btn9 = new Button(0, 500);
    Button* btn10 = new Button(0, 550);
    Button* btn11 = new Button(0, 600);
    Button* btn12 = new Button(0, 650);

    Gates::Not* not1 = new Gates::Not(100, 100, btn1);
    Gates::Not* not2 = new Gates::Not(200, 130, not1);
    Gates::Not* not3 = new Gates::Not(100, 200, btn3);
    Gates::Not* not4 = new Gates::Not(200, 200, not3);
    Gates::And* and1 = new Gates::And(300, 175, btn2, not4);

    Gates::Xor* xor1 = new Gates::Xor(400, 125, not1, and1);
    Gates::Not* not5 = new Gates::Not(100, 350, btn6);
    Gates::Xor* xor2 = new Gates::Xor(200, 300, not3, not5);
    Gates::And* and2 = new Gates::And(300, 275, btn4, xor2);
    Gates::And* and3 = new Gates::And(400, 175, not2, and2);

    Gates::Not* not6 = new Gates::Not(500, 225, and3);
    Gates::Not* not7 = new Gates::Not(500, 125, xor1);
    Gates::Xnor* xnor1 = new Gates::Xnor(600, 175, not7, and3);
    Gates::Nor* nor1 = new Gates::Nor(700, 250, xnor1, not6);
    Gates::Not* not8 = new Gates::Not(400, 275, and2);

    Gates::Not* not9 = new Gates::Not(300, 360, btn5);
    Gates::Nor* nor2 = new Gates::Nor(100, 400, btn7, btn8);
    Gates::Not* not10 = new Gates::Not(100, 450, btn8);
    Gates::And* and4 = new Gates::And(200, 450, nor2, not10);
    Gates::Xor* xor3 = new Gates::Xor(400, 380, not9, and4);

    Gates::Nor* nor3 = new Gates::Nor(500, 325, not8, xor3);
    Gates::Not* not11 = new Gates::Not(600, 325, nor3);
    Gates::Not* not12 = new Gates::Not(100, 500, btn9);
    Gates::Not* not13 = new Gates::Not(100, 550, btn10);
    Gates::And* and5 = new Gates::And(200, 500, not12, not13);

    Gates::Not* not14 = new Gates::Not(300, 500, and5);
    Gates::And* and6 = new Gates::And(400, 550, not14, not13);
    Gates::Not* not15 = new Gates::Not(100, 600, btn11);
    Gates::And* and7 = new Gates::And(200, 625, not15, btn12);
    Gates::Not* not16 = new Gates::Not(300, 625, and7);

    Gates::Not* not17 = new Gates::Not(400, 625, not16);
    Gates::And* and8 = new Gates::And(500, 575, and6, not17);
    Gates::And* and9 = new Gates::And(600, 450, and4, and8);
    Gates::And* and10 = new Gates::And(700, 400, not11, and9);
    Gates::And* and11 = new Gates::And(800, 375, nor1, and10);
    finish = new Finish(900, 375, and11);

    objects.push_back(btn1);
    objects.push_back(btn2);
    objects.push_back(btn3);
    objects.push_back(btn4);
    objects.push_back(btn5);
    objects.push_back(btn6);
    objects.push_back(btn7);
    objects.push_back(btn8);
    objects.push_back(btn9);
    objects.push_back(btn10);
    objects.push_back(btn11);
    objects.push_back(btn12);

    objects.push_back(not1);
    objects.push_back(not2);
    objects.push_back(not3);
    objects.push_back(not4);
    objects.push_back(and1);

    objects.push_back(xor1);
    objects.push_back(not5);
    objects.push_back(xor2);
    objects.push_back(and2);
    objects.push_back(and3);

    objects.push_back(not6);
    objects.push_back(not7);
    objects.push_back(xnor1);
    objects.push_back(nor1);
    objects.push_back(not8);

    objects.push_back(not9);
    objects.push_back(nor2);
    objects.push_back(not10);
    objects.push_back(and4);
    objects.push_back(xor3);

    objects.push_back(nor3);
    objects.push_back(not11);
    objects.push_back(not12);
    objects.push_back(not13);
    objects.push_back(and5);

    objects.push_back(not14);
    objects.push_back(and6);
    objects.push_back(not15);
    objects.push_back(and7);
    objects.push_back(not16);

    objects.push_back(not17);
    objects.push_back(and8);
    objects.push_back(and9);
    objects.push_back(and10);
    objects.push_back(and11);
    objects.push_back(finish);
}
