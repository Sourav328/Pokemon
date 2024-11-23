#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include <iostream>
#include <limits>

// Default constructor
Player::Player() : name("Trainer"), chosenPokemon() {}


Player::Player(std::string p_name, Pokemon p_chosenPokemon)
    : name(std::move(p_name)), chosenPokemon(std::move(p_chosenPokemon)) {
}


void Player::choosePokemon(int choice) {
    switch (static_cast<PokemonChoice>(choice)) {
    case PokemonChoice::CHARMANDER:
        chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100, 10);
        break;
    case PokemonChoice::BULBASAUR:
        chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100, 9);
        break;
    case PokemonChoice::SQUIRTLE:
        chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 9);
        break;
    default:
        chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 12);
        break;
    }
    std::cout << "Player " << name << " chose " << chosenPokemon.getName() << "!\n";
    Utility::waitForEnter(); // Wait for user to press Enter before proceeding
}