#pragma once
#include <vector>
#include "Pokemon.h"
#include "Grass.h"

namespace N_Battle
{
	struct Grass;
	class Pokemon;

	class WildEncounterManager {
	public:
		WildEncounterManager();
		N_Pokemon::Pokemon GetRandomPokemonFromGrass(N_Pokemon::Grass& grass);
	};
}