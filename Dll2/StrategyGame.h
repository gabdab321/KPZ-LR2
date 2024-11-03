#ifndef STRATEGYGAME_H
#define STRATEGYGAME_H

#include "Game.h"
#include <iostream>

class StrategyGame : public Game {
public:
    void start() override {
        std::cout << "Starting a strategy game!" << std::endl;
    }
};

#endif // STRATEGYGAME_H
