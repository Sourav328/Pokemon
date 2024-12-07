#pragma once
#include "BattleState.h"
#include "Pokemon.h" 
#include <iostream>


namespace N_Battle
{
    class Player;
    class Pokemon;


    public:
        void StartBattle(N_Pokemon::Pokemon& chosenPokemon, N_Pokemon::Pokemon& wildPokemon);
        void Battle();
        void HandleBattleOutcome();
        void UpdateBattleState();
    private:
        BattleState battleState;
    };
}
