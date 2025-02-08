#pragma once
#include <vector>
#include "../../Include/Pokemon/Pokemon.h"
#include "../../Include/Pokemon/Grass.h"
#include <iostream>

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