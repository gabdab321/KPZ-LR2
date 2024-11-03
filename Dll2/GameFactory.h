#ifndef GAMEFACTORY_H
#define GAMEFACTORY_H

#include "Game.h"
#include "ActionGame.h"
#include "StrategyGame.h"

class GameFactory {
public:
    enum GameType {
        ACTION,
        STRATEGY
    };

    static Game* createGame(GameType type) {
        switch (type) {
        case ACTION: return new ActionGame();
        case STRATEGY: return new StrategyGame();
        default: return nullptr;
        }
    }
};

#endif // GAMEFACTORY_H
