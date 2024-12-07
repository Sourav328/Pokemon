#include "Player.h"
#include "ProfessorOak.h"

#include "Utility.h"
#include <string>
#include <limits> // For input validation
using namespace N_Utility;

namespace N_Character
{
    ProfessorOak::ProfessorOak(string p_name) : name(move(p_name)) {}

    void ProfessorOak::GreetPlayer(N_Player::Player& player) const
    {
        cout << name << u8": Hello there! Welcome to the world of Pok�mon!\n";
        Utility::WaitForEnter();

        cout << name << u8": My name is Oak. People call me the Pok�mon Professor!\n";
        Utility::WaitForEnter();

        cout << name << ": But enough about me. Let's talk about you!\n";
        Utility::WaitForEnter();
    }

    void ProfessorOak::OfferPokemonChoices(N_Player::Player& player) const
    {
        cout << name << u8": First, tell me, what�s your name? [Please Enter Your Name]\n";
        getline(cin, player.name);

        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        Utility::WaitForEnter();

        cout << name << ": You must be eager to start your adventure. But first, "
            << u8"you�ll need a Pok�mon of your own!\n";
        Utility::WaitForEnter();

        cout << name << u8": I have three Pok�mon here with me. They�re all quite feisty!\n";
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
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
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

        cout << u8"Professor Oak: Becoming a Pok�mon Master is no easy feat. It takes courage, "
            << "wisdom, and a bit of luck!\n";
        Utility::WaitForEnter();

        cout << u8"Professor Oak: Your mission is to collect all the Pok�mon Badges and conquer "
            << u8"the Pok�mon League.\n";
        Utility::WaitForEnter();

        cout << player.name << u8": Wait... that sounds a lot like every other Pok�mon game "
            << "out there...\n";
        Utility::WaitForEnter();

        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name
            << "! This is serious business!\n";
        Utility::WaitForEnter();

        cout << u8"Professor Oak: To achieve this, you�ll need to battle wild Pok�mon, challenge "
            << u8"gym leaders, and of course, keep your Pok�mon healthy at the Pok�Center.\n";
        Utility::WaitForEnter();

        cout << u8"Professor Oak: Along the way, you'll capture new Pok�mon to strengthen your "
            << u8"team. Just remember�there�s a limit to how many Pok�mon you can carry, so choose wisely!\n";
        Utility::WaitForEnter();

        cout << player.name << ": Sounds like a walk in the park... right?\n";
        Utility::WaitForEnter();

        cout << u8"Professor Oak: Hah! That�s what they all say! But beware, young Trainer, "
            << "the path to victory is fraught with challenges. And if you lose a battle... "
            << u8"well, let�s just say you�ll be starting from square one.\n";
        Utility::WaitForEnter();

        cout << u8"Professor Oak: So, what do you say? Are you ready to become the next Pok�mon Champion?\n";
        Utility::WaitForEnter();

        cout << player.name << u8": Ready as I�ll ever be, Professor!\n";
        Utility::WaitForEnter();

        cout << u8"Professor Oak: That�s the spirit! Now, your journey begins...\n";
        Utility::WaitForEnter();

        cout << u8"Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        Utility::WaitForEnter();
    }

}