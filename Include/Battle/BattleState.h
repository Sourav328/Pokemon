#pragma once
#include "../../Include/Pokemon/Pokemon.h"
#include <iostream>

namespace N_Battle
{
    struct BattleState
    {
        N_Pokemon::Pokemon* playerPokemon;
        N_Pokemon::Pokemon* wildPokemon;
        bool playerTurn;
        bool battleOngoing;
    };
}