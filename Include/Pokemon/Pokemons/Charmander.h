#pragma once
#include "../../Include/Pokemon/Pokemon.h"

namespace N_Pokemon 
{
	namespace N_Pokemons
	{
		class Charmander : public Pokemon
		{
		  private:
			void flameThrower(Pokemon& target);
		  public:
			Charmander();
		};
	}
}
