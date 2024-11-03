#ifndef GAME_H
#define GAME_H

class Game {
public:
    virtual void start() = 0; // Віртуальний метод
    virtual ~Game() {}
};

#endif // GAME_H
