#include "Game.hpp"
#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "ProfessorOak.hpp"
#include "Utility.hpp"
#include <iostream>
#include <limits> 
#include <string>

int main() 
{

	ProfessorOak professor("Professor Oak");
	Player player;
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);
	professor.explainMainQuest(player);
	Game game;
	game.gameLoop(player);

	return 0;
}