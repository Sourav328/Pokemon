#include "BattleManager.h"
#include "Player.h"
#include "Utility.h"
#include <iostream>
using namespace std;
namespace N_Battle
{

    void BattleManager::StartBattle(N_Pokemon::Pokemon& chosenPokemon, N_Pokemon::Pokemon& wildPokemon) {
        battleState.playerPokemon = &chosenPokemon;
        battleState.wildPokemon = &wildPokemon;
        battleState.playerTurn = true;
        battleState.battleOngoing = true;

        cout << "A wild " << battleState.wildPokemon->name << " appeared!\n";
        Battle();
    }

    void BattleManager:: Battle()
    {
        while (battleState.battleOngoing)
        {
            if (battleState.playerTurn)
            {
                battleState.playerPokemon->Attack(*battleState.wildPokemon);
            }
            else {
                battleState.wildPokemon->Attack(*battleState.playerPokemon);
            }

            UpdateBattleState();
            battleState.playerTurn = !battleState.playerTurn;
            N_Utility::Utility::WaitForEnter();
        }

        HandleBattleOutcome();
    }

    void BattleManager :: UpdateBattleState()
    {
        if (battleState.playerPokemon->IsFainted())
        {
            battleState.battleOngoing = false;
        }
        else if (battleState.wildPokemon->IsFainted())
        {
            battleState.battleOngoing = false;
        }
    }

    void BattleManager::HandleBattleOutcome()
    {
        if (battleState.playerPokemon->IsFainted())
        {
            cout << battleState.playerPokemon->name
                << " Has fainted! You lose the battle.\n";
        }
        else {
            cout << "You defeated the wild " << battleState.wildPokemon->name << "!\n";
        }
    }
}