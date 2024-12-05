#include "WildEncounterManager.h"

#include <cstdlib> 
#include <ctime>  
namespace N_Battle
{

	WildEncounterManager::WildEncounterManager() {
		srand(static_cast<unsigned int>(time(0)));
	}

	N_Pokemon::Pokemon WildEncounterManager::GetRandomPokemonFromGrass(N_Pokemon::Grass& grass)
	{
		int randomIndex = rand() % grass.wildPokemonList.size();
		return grass.wildPokemonList[randomIndex];
	}
}