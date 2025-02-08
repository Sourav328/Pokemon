#include "../../Include/Pokemon/Pokemons/Caterpie.h"
#include "../../Include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon {

    namespace N_Pokemons { 


        using namespace std;

        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}

        void Caterpie::attack(Pokemon* target)
        {
            bugBite(target);
        }

        void Caterpie::bugBite(Pokemon& target) 
        {
            cout << name << " uses Bug Bite on " << target.name << "!\n";
            target.TakeDamage(20);

        }
    }
}