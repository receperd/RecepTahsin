#ifndef TREASURE_H
#define TREASURE_H

#include "Position.h"

class Treasure : public Position {
public:
    Treasure(int startX, int startY) : Position(startX, startY) {}
};

#endif
