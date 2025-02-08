#pragma once
#include <vector>
#include "../../Include/Pokemon/Pokemon.h"
namespace N_Pokemon
{
	class Pokemon;

	struct Grass
	{
		std::string environmentType;
		std::vector<Pokemon> wildPokemonList;
		int encounterRate;
	};
}