#include "Player.h"

void Player::move(char direction) {
    switch (direction) {
        case 'w': --y; break; // YukarÄ±
        case 's': ++y; break; // AÅŸaÄŸÄ±
        case 'a': --x; break; // Sola
        case 'd': ++x; break; // SaÄŸa
    }
}
