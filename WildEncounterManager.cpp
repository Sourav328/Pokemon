#include "WildEncounterManager.hpp"
#include "Grass.hpp"
#include "Pokemon.hpp"
#include <cstdlib> 
#include <ctime>  
namespace N_Battle
{
	WildEncounterManager::WildEncounterManager() {
		srand(time(0));
	}

	Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
		int randomIndex = rand() % grass.wildPokemonList.size();
		return grass.wildPokemonList[randomIndex];
	}
}