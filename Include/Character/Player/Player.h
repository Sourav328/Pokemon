#pragma once
#include <string>
#include "Grass.h"
//using namespace std;
namespace N_Player
{
    class Player
    {
    public:
        std::string name;
        N_Pokemon::Pokemon chosenPokemon;
        Player();
        Player(std::string p_name, N_Pokemon::Pokemon& p_chosenPokemon);

        void ChoosePokemonIndex(int choice);
    };
}