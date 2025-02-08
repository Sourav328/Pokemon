#include "../../Include/Character/Player/Player.h"
#include "../../Include/Character/ProfessorOak.h"


using namespace N_Utility;

namespace N_Character
{
    ProfessorOak::ProfessorOak(string p_name) : name(move(p_name)) {}

    void ProfessorOak::GreetPlayer(N_Player::Player& player) const
    {

        Utility::WaitForEnter();

        cout << name << ": But enough about me. Let's talk about you!\n";
        Utility::WaitForEnter();
    }

    void ProfessorOak::OfferPokemonChoices(N_Player::Player& player) const
    {

        getline(cin, player.name);

        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        Utility::WaitForEnter();

        cout << name << ": You must be eager to start your adventure. But first, "

        Utility::WaitForEnter();

        cout << name << ": Choose wisely...\n"
            << "1. Charmander - The fire type. A real hothead!\n"
            << "2. Bulbasaur - The grass type. Calm and collected!\n"
            << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        while (true)
        {
            cout << name << ": So, which one will it be? Enter the number of your choice: ";
            cin >> choice;

            if (cin.fail() || choice < 1 || choice > 3) {

                cout << name << ": That's not a valid choice. Please try again.\n";
            }
            else {
                break;
            }
        }

        player.ChoosePokemonIndex(choice);
        Utility::WaitForEnter();
    }

    void ProfessorOak::ExplainMainQuest(N_Player::Player& player)
    {
        Utility::ClearConsole();

        cout << "Professor Oak: " << player.name
            << "! I am about to explain your upcoming grand adventure.\n";
        Utility::WaitForEnter();


            << "out there...\n";
        Utility::WaitForEnter();

        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name
            << "! This is serious business!\n";
        Utility::WaitForEnter();


        Utility::WaitForEnter();

        cout << player.name << ": Sounds like a walk in the park... right?\n";
        Utility::WaitForEnter();

        cout << u8"Professor Oak: Hah! That�s what they all say! But beware, young Trainer, "
            << "the path to victory is fraught with challenges. And if you lose a battle... "

        Utility::WaitForEnter();

        cout << u8"Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        Utility::WaitForEnter();
    }

}