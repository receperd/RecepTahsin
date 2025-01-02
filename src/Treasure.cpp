#include "Treasure.h"

Treasure::Treasure(int startX, int startY) : x(startX), y(startY) {}

int Treasure::getX() const { return x; }

int Treasure::getY() const { return y; }
