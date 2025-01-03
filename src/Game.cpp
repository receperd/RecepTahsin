#include <iostream>
#include <conio.h>
#include "Game.h"

Game::Game(int width, int height)
    : player(width / 2, height / 2), treasure(rand() % width, rand() % height), gridWidth(width), gridHeight(height), isRunning(true), level(1) {
    grid.resize(gridHeight, std::vector<char>(gridWidth, '.'));
    grid[player.getY()][player.getX()] = 'P';
    grid[treasure.getY()][treasure.getX()] = 'T';
}

void Game::drawGrid() {
    system("cls");
    std::cout << "Level: " << level << std::endl;
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << std::endl;
    }
}

void Game::updatePosition(int oldX, int oldY) {
    grid[oldY][oldX] = '.';
    grid[player.getY()][player.getX()] = 'P';
    drawGrid();
}

void Game::resetLevel() {
    player = Player(gridWidth / 2, gridHeight / 2);
    treasure = Treasure(rand() % gridWidth, rand() % gridHeight);

    grid.assign(gridHeight, std::vector<char>(gridWidth, '.'));
    grid[player.getY()][player.getX()] = 'P';
    grid[treasure.getY()][treasure.getX()] = 'T';

    ++level;
    drawGrid();
}

void Game::processInput(char input) {
    int oldX = player.getX();
    int oldY = player.getY();
    player.move(input);

    if (player.getX() < 0) player.move('d');
    if (player.getX() >= gridWidth) player.move('a');
    if (player.getY() < 0) player.move('s');
    if (player.getY() >= gridHeight) player.move('w');

    updatePosition(oldX, oldY);
}

bool Game::checkWin() const {
    return player.getX() == treasure.getX() && player.getY() == treasure.getY();
}

void Game::run() {
    drawGrid();

    while (isRunning) {
        if (_kbhit()) {
            char input = _getch();
            processInput(input);

            if (checkWin()) {
                std::cout << "Tebrikler, hazineyi buldunuz!" << std::endl;
                std::cout << "2 saniye icinde sonraki seviyeye geciliyor..." << std::endl;
                _sleep(2000);
                resetLevel();
            }
        }
    }
}
