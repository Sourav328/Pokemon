<<<<<<< Updated upstream
#include <iostream>
#include<string>
using namespace std;

void Game_Start()
{
    cout << "Ah, Trainer!" << endl;
    cout << "Welcome to the world of Pokemon! I am Professor Oak." << endl;
    cout << "Today is a momentous day—you will be choosing your very first Pokemon." << endl;
    cout << "Every great Trainer remembers this moment for the rest of their lives." << endl;
    cout << "So, choose wisely, young one!" << endl;
    cout << "1. Bulbasaur" << endl;
    cout << "2. Charmander " << endl;
    cout << "3. Squirtle " << endl;
}

void Game_End()
{
    cout << "Professor Oak: Ah, an excellent choice!" << endl;
    cout << "Professor Oak: But beware, Trainer," << endl;
    cout << "Professor Oak: This is only the beginning. Your journey is about to unfold." << endl;
    cout << "Professor Oak: Now let's see if you've got what it takes to keep going!" << endl;
    cout << "Professor Oak: Good luck, and remember—choose wisely!" << endl;
}

void Professor_Oak()
{
    cout << "                        " << endl;
    cout << "Professor Oak: Ah, young Trainer!" << endl;
    cout << "Professor Oak: I see you've made a great start," << endl;
    cout << "Professor Oak: but do you really think we're done yet?" << endl;
    cout << "Professor Oak: No, no, no!" << endl;
    cout << "Professor Oak: We've only just scratched the surface!" << endl;
}

void Tracey()
{
    cout << "                        " << endl;
    cout << "Tracey: So, you have been following Oak’s every word, huh?" << endl;
    cout << "Tracey: Cute." << endl;
    cout << "Tracey: But the real battles require more than just basic programming." << endl;
    cout << "Tracey: Today, you're going to clean up some mess in your code." << endl;
    cout << "Tracey: Let's see if you can level up your enums... if you’r ready, of course." << endl;
}


enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};
enum class PokemonType {
    FIRE,
    GRASS,
    WATER,
    ELECTRIC
};

class Pokemon
{
public:
    string Name;
    PokemonType Type;
    int Health;
    Pokemon() : Name("Unknown"), Type(PokemonType::ELECTRIC), Health(100)
    {

    }
    Pokemon(string P_Name, PokemonType P_Type, int P_Health)
        : Name(P_Name), Type(P_Type), Health(P_Health)
    {

    }
    void Attack()
    {
        cout << Name << "Attacks With A Powerful Move!\n";
    }
};
class Player 
{
public:
    string Name;
    Pokemon ChosenPokemon;
    void ChoosePokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::Charmander:
            ChosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
            break;
        case PokemonChoice::Bulbasaur:
            ChosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            break;
        case PokemonChoice::Squirtle:
            ChosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            break;
        }
        cout << "Player" << Name << "chose" << ChosenPokemon.Name << "!\n";
    }
};
class ProfessorOak
{
public:
    string Name;
    void greetPlayer(Player& player)
    {
        cout << Name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << Name << ": My Name is Oak. People call me the Pokemon Professor!\n";
        cout << Name << ": But enough about me. Let's talk about you!\n";
    }
    void offerPokemonChoices(Player& player)
    {
        cout << Name << ": First, tell me, what’s your name?\n";
        getline(cin, player.Name);
        cout << Name << ": Ah, " << player.Name << "! What a fantastic name!\n";
        cout << Name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";
        cout << Name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
        cout << Name << ": Choose wisely...\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << Name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.ChoosePokemon(choice);
    }
};

int main()
{
  
    ProfessorOak professor;
    Player player;
    professor.Name = "Professor Oak";
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    cout << "Professor Oak: " << player.ChosenPokemon.Name << " and you, " << player.Name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
>>>>>>> Stashed changes
