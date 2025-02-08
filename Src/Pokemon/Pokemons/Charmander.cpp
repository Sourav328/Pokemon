#include "../../Include/Pokemon/Pokemons/Charmander.h"
#include "../../Include/Pokemon/PokemonType.h"
#include <iostream>
namespace N_Pokemon
{
	namespace N_Pokemons 
	{
		using namespace std;
		Charmander::Charmander() : Pokemon("Charmander",PokemonType::FIRE,100,35){}
		void Charmander::flameThrower(Pokemon& target)
		{
			cout << name << " used FLAME THROWER!\n";
             N_Utility::Utility::waitForEnter();

             cout << "...\n"; 
             N_Utility::Utility::waitForEnter();

             target->TakeDamage(attackPower);

             if (target->IsFainted())
              cout << target->name << " fainted!\n";
             else
               cout << target->name << " has " << target->health << " HP left.\n";
              N_Utility::Utility::WaitForEnter();
		}
		void Pokemon::selectAndUseMove(Pokemon* target)
		{
			
		}
	}
}

