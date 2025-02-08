#pragma once
#include "../../Include/Character/Player/Player.h"
#include <iostream>
using namespace std;


using namespace N_Player;

namespace N_Character
{
	class Player;

	class ProfessorOak 
	{
	public:
		string name;

		ProfessorOak(string p_name);
		void GreetPlayer(N_Player::Player& player) const;
		void OfferPokemonChoices(N_Player::Player& player) const;
		void ExplainMainQuest(N_Player::Player& player);
	};
}
