#pragma once

#include <vector>
#include "Pokemon.h"
#include "Player.h"

namespace N_Main
{
    class Game {
    private:
        std::vector<N_Pokemon::Pokemon> forestGrass;
    public:
        Game();
        void GameLoop(N_Player::Player& player);
        void VisitPokeCenter(N_Player::Player player);
    };
}