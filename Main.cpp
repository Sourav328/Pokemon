#include "../../Include/Main/Game.h"
#include "../../Include/Character/Player/Player.h"
#include "../../Include/Pokemon/PokemonChoice.h"
#include "../../Include/Pokemon/PokemonType.h"
#include "../../Include/Character/ProfessorOak.h"
#include "../../Include/Utility/Utility.h"
#include <iostream>
#include <limits> 
#include <string>

using namespace N_Character;
using namespace N_Player;

int main() 
{

    
    ProfessorOak* professor = new ProfessorOak("Professor Oak");
    N_Player::Player* player = new N_Player::Player();

    
    professor -> GreetPlayer (player);
    professor -> PokemonChoices (player);

    
    professor -> ExplainMainQuest (player);

    
    N_Main::Game* game = new N_Main::Game();
    game -> GameLoop (player);

    delete(professor);
    delete(player);
    delete(game);
    
    return 0;
}