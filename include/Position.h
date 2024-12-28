#ifndef POSITION_H
#define POSITION_H

class Position {
protected:
    int x, y; // Ortak pozisyon bilgisi

public:
    Position(int startX, int startY) : x(startX), y(startY) {}
    int getX() const { return x; }
    int getY() const { return y; }
    void setPosition(int newX, int newY) { x = newX; y = newY; }
};

#endif
