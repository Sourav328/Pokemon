#include "Pidgey.h"
#include "PokemonType.h"
#include <iostream>

using namespace std;
namespace N_Pokemon 
{
    namespace N_Pokemons 
    {
        using namespace std;

        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) 
        {

        }

        void Pidgey::WingAttack(Pokemon& target) 
        {
            cout << name << " uses Wing Attack on " << target.name << "!\n";
            target.TakeDamage(20);
        }
    }
}