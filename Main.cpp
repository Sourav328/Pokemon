#include "Game.h"
#include "Player.h"
#include "PokemonChoice.h"
#include "PokemonType.h"
#include "ProfessorOak.h"
#include "Utility.h"
#include <iostream>
#include <limits> 
#include <string>

using namespace N_Character;
using namespace N_Player;

int main() {

    // Continue with the main flow of the game
    ProfessorOak* professor = new ProfessorOak("Professor Oak");
    N_Player::Player* player = new N_Player::Player();

    // Greet the player and offer Pokemon choices
    professor -> greetPlayer (player);
    professor -> PokemonChoices (player);

    // Explain the main quest
    professor-> explainMainQuest (player);

    // Start the main game loop
    N_Main::Game* game = new N_Main::Game();
    game-> gameLoop (player);

    delete(professor);
    delete(player);
    delete(game);
    
    return 0;
}