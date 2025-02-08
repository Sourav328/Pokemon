#include "../../Include/Pokemon/Pokemons/Pikachu.h"
#include "../../Include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon 
{
    namespace N_Pokemons 
    {

        using namespace std;

        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {}

        void Pikachu::thunderShock(Pokemon& target) {
            cout << name << " uses Thunder Shock on " << target.name << "!\n";
            target.TakeDamage(20);
        }
    }
}