#include <iostream>
#include "../../Include/Main/Game.h"
#include "../../Include/Utility/Utility.h"
#include "../../Include/Battle/BattleManager.h"
#include "../../Include/Character/ProfessorOak.h"
#include "../../Include/Pokemon/PokemonType.h"
#include "../../Include/Pokemon/Pokemon.h"
#include "../../Include/Character/Player/Player.h"

using namespace N_Utility;
using namespace N_Pokemon;
using namespace N_Player;

namespace N_Main
{

    Game::Game() 
    {
        forestGrass = 
        {
            N_Pokemon::Pokemon("Pidgey", PokemonType::NORMAL, 40, 7),
            N_Pokemon::Pokemon("Caterpie", PokemonType::BUG, 35, 5),
            N_Pokemon::Pokemon("Zubat", PokemonType::POISON, 30, 8)
        };
    }

    void Game::GameLoop(N_Player::Player& player) 
    {
        int choice;
        bool keepPlaying = true;

        while (keepPlaying) 
        {
            Utility::ClearConsole();
            std::cout << "\n What would you like to do next, " << player.name << "?\n";
            std::cout << "1. Explore the Forest\n";
            std::cout << "2. Visit PokeCenter\n";
            std::cout << "3. Quit\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;
            Utility::ClearInputBuffer();

            switch (choice) {
            case 1:
                std::cout << u8"You explore the forest and encounter a wild Pok�mon!\n";
                break;
            case 2:
                VisitPokeCenter(player);
                break;
            case 3:
                keepPlaying = false;
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
                break;
            }

            Utility::WaitForEnter();
        }

        std::cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
    }

    void Game::VisitPokeCenter(N_Player::Player player) 
    {
        std::cout << "Healing " << player.chosenPokemon.name << "...\n";
        player.chosenPokemon.heal();
        std::cout << player.chosenPokemon.name << " is fully healed!\n";
    }
}