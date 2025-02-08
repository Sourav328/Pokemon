#include "../../Include/Pokemon/Pokemons/Pidgey.h"
#include "../../Include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon 
{
    namespace N_Pokemons 
    {
        using namespace std;

        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}

        void Pidgey::WingAttack(Pokemon& target) 
        {
            cout << name << " used WING ATTACK!\n";
            N_Utility::Utility::WaitForEnter();

            cout << "...\n"; 
            N_Utility::Utility::WaitForEnter();

             target->TakeDamage(attackPower);

            if (target->IsFainted())
              cout << target->name << " fainted!\n";
            else
              cout << target->name << " has " << target->health << " HP left.\n";
              N_Utility::Utility::WaitForEnter();
        }
    }
}