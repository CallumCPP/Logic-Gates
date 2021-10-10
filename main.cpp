#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include "Platform/Platform.hpp"
#include "Level/Levels.h"

std::vector<Gate> gates;
std::vector<Level> levels;
std::vector<sf::Sprite> sprites;
int currLevel = 0;

int main(int, char**) {
    sf::RenderWindow w;
    w.create(sf::VideoMode(800.f, 800.f), "Logic Gates");
    sf::Event event;

    levels.push_back(Lvl1());
    levels.push_back(Lvl2());
    levels.push_back(Lvl3());
    levels.push_back(Lvl4());
    levels.push_back(Lvl5());
    levels.push_back(Lvl6());
    levels.push_back(Lvl7());

    levels[currLevel].display(&w);
    w.display();

    while (true){
        while (w.pollEvent(event)){
                if (event.type == sf::Event::Closed){
                w.close();
                exit(EXIT_SUCCESS);
            }
        }
        
        w.clear();
        if (levels[currLevel].display(&w)){
            std::this_thread::sleep_for(std::chrono::seconds(1));
            for (int i = 0; i < levels[currLevel].objects.size(); i++){
                if (levels[currLevel].objects[i]) delete levels[currLevel].objects[i];
            }

            currLevel++;
        }
        w.display();
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
    }
}
