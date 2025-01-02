#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Treasure.h"
#include <string>
#include <vector>

class Game {
private:
    Player player;
    Treasure treasure;
    int gridWidth, gridHeight;
    bool isRunning;
    int level; // Seviye
    std::vector<std::vector<char>> grid; // Harita için 2D vektör
    void drawGrid();                     // Haritayı çizen fonksiyon
    void updatePosition(int oldX, int oldY); // Karakterin eski pozisyonunu temizleyip yenisini çizen fonksiyon
    void resetLevel();                   // Yeni seviyeyi başlatan fonksiyon
public:
    Game(int width, int height);
    void processInput(char input);
    bool checkWin() const;
    void run();
};

#endif
