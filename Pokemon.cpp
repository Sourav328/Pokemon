#include <iostream>
#include <string>
using namespace std;


enum class PokemonChoice {
    Charmander = 1,
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


class Pokemon {
public:
    string Name;
    PokemonType Type;
    int Health;

    Pokemon(string P_Name, PokemonType P_Type, int P_Health)
        : Name(P_Name), Type(P_Type), Health(P_Health)
    {
    }


    void Attack()
    {
        cout << Name << " attacks with a powerful move!\n";
    }
};

// Player class definition
class Player {
public:
    string Name;
    Pokemon ChosenPokemon{ "", PokemonType::FIRE, 0 }; 

    
    void ChoosePokemon(int choice) {
        switch (static_cast<PokemonChoice>(choice)) {
        case PokemonChoice::Charmander:
            ChosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
            break;
        case PokemonChoice::Bulbasaur:
            ChosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            break;
        case PokemonChoice::Squirtle:
            ChosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            break;
        default:
            ChosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);  
            break;
        }
        cout << "Player " << Name << " chose " << ChosenPokemon.Name << "!\n";
    }
};


class ProfessorOak {
public:
    string Name;

    
    void greetPlayer(Player& player) {
        cout << Name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << Name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << Name << ": But enough about me. Let's talk about you!\n";
    }

  
    void offerPokemonChoices(Player& player) {
        cout << Name << ": First, tell me, what's your name?\n";
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
        cin.ignore();  
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
