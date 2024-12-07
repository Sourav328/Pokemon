

#include "Game.h"
#include "PokemonChoice.h"
#include "ProfessorOak.h"
#include <iostream>
#include <limits> 
#include <string>
using namespace N_Character;
using namespace N_Player;

int main()
{
	ProfessorOak professor("Professor Oak");
	N_Player::Player player;


	professor.GreetPlayer(player);
	professor.OfferPokemonChoices(player);

	professor.ExplainMainQuest(player);


	N_Main::Game game;
	game.GameLoop(player);

	return 0;
}
