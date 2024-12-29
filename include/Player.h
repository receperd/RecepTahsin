#ifndef PLAYER_H
#define PLAYER_H

#include "Position.h"

class Player : public Position {
public:
    Player(int startX, int startY) : Position(startX, startY) {}
    void move(char direction);
};

#endif
