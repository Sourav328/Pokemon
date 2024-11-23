#include "BattleManager.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include <iostream>
using namespace std;
void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {
    battleState.playerPokemon = &player.chosenPokemon;
    battleState.wildPokemon = &wildPokemon;
    battleState.playerTurn = true;  // Player starts first
    battleState.battleOngoing = true;

    std::cout << "A wild " << wildPokemon.name << " appeared!\\n";
    battle();
}
void BattleManager::battle() {
    while (battleState.battleOngoing) {
        if (battleState.playerTurn) {
            // Player's turn to attack
            battleState.playerPokemon->attack(*battleState.wildPokemon);
        }
        else {
            // Wild Pok�mon's turn to attack
            battleState.wildPokemon->attack(*battleState.playerPokemon);
        }

        // Update the battle state after the turn
        updateBattleState();

        // Switch turns
        battleState.playerTurn = !battleState.playerTurn;

        Utility::waitForEnter();
    }

    handleBattleOutcome();
}


void BattleManager::updateBattleState() {
    if (battleState.playerPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
    else if (battleState.wildPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
}
void BattleManager::handleBattleOutcome() {
    if (battleState.playerPokemon->isFainted()) {
        std::cout << battleState.playerPokemon->name << " has fainted! You lose the battle.\\n";
    }
    else {
        std::cout << "You defeated the wild " << battleState.wildPokemon->name << "!\\n";
    }
}