#include "../../Include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../Include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon 
{
    namespace N_Pokemons 
    {
        using namespace std;

        Balbasaur::Balbasaur() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

        void Balbasaur::vineWhip(Pokemon& target) 
        {
            cout << name << " uses vine Whip on " << target.name << "!\n";
            target.TakeDamage(20);
        }
    }
}