#pragma once
#include <vector>
#include "Pokemon.h"
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