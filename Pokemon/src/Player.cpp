#include "Player.h"
#include "Utility.h"
#include <iostream>
#include "PokemonChoice.h"
using namespace N_Pokemon;

using namespace N_Utility;


namespace N_Player
{

    Player::Player()
    {
        name = "Trainer";
        chosenPokemon = Pokemon();
    }
    Player::Player(std::string p_name, N_Pokemon::Pokemon& p_chosenPokemon)
    {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
    }

    void Player::ChoosePokemonIndex(int choice) {
        switch ((PokemonChoice)choice) {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100, 10);
            break;
        case N_Pokemon::PokemonChoice::BULBASAUR:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100, 8);
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 9);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", N_Pokemon::PokemonType::ELECTRIC, 100, 12);
            break;
        }
        std::cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
        Utility::WaitForEnter(); // Wait for user to press Enter before proceeding
    }
}