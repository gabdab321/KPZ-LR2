#ifndef ACTIONGAME_H
#define ACTIONGAME_H

#include "Game.h"
#include <iostream>

class ActionGame : public Game {
public:
    void start() override {
        std::cout << "Starting an action game!" << std::endl;
    }
};

#endif // ACTIONGAME_H
