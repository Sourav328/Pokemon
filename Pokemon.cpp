#include<iostream>
#include<string>
using namespace std;


enum class PokemonChoice {
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU
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
    string name;
    PokemonType type;
    int health;
    Pokemon() : name("Pikachu"), type(PokemonType::ELECTRIC), health(10) {
       
    }
    Pokemon(string p_name, PokemonType p_type, int p_health)
        : name(p_name), type(p_type), health(p_health) {
        cout << "A custom Pokemon, " << name << ", has been summoned! (Parameterized constructor)\n";
    }
    Pokemon(const Pokemon& other)
        : name(other.name), type(other.type), health(other.health) {
        cout << "A copy of " << other.name << " has been summoned! (Copy constructor)\n";
    }
    void attack() { std::cout << name << " attacks with a powerful move!\n"; }
};

class Player {
public:
    string name;
    Pokemon chosenPokemon;
    Player() : name("Trainer"), chosenPokemon() {
       
    }
    Player(string p_name, Pokemon p_chosenPokemon)
        : name(p_name), chosenPokemon(p_chosenPokemon) {
        cout << "Player " << name << " has chosen " << chosenPokemon.name << "! (Parameterized constructor)\n";
    }
    Player(const Player& other)
        : name(other.name), chosenPokemon(other.chosenPokemon) {
        cout << "A copy of player " << other.name << " has been created! (Copy constructor)\n";
    }
    void choosePokemon(int choice)
    {
        switch ((PokemonChoice)choice) {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
            break;
        }
        cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    }
};

class ProfessorOak
{
public:
    string name;
    void greetPlayer(Player& player)
    {
        cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << name << ": But enough about me. Let's talk about you!\n";
    }
    void offerPokemonChoices(Player& player) {
        cout << name << ": First, tell me, what's your name?\n";
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        cout << name << ": You must be eager to start your adventure. But first, you'll need a Pokemon of your own!\n";

        cout << name << ": I have three Pokemon here with me. They're all quite feisty!\n";
        cout << name << ": Choose wisely...\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
    }
};

int main() {

    ProfessorOak professor;
    Player defaultPlayer;
    professor.name = "Professor Oak";
    professor.greetPlayer(defaultPlayer);
    professor.offerPokemonChoices(defaultPlayer);

    cout << "\nCreating a custom player and Pokemon...\n";
    Pokemon customPokemon("Charmander", PokemonType::FIRE, 120);
    Player customPlayer("Ash", customPokemon);
    cout << "Professor Oak: " << customPlayer.chosenPokemon.name << " and you, " << customPlayer.name << ", are going to be the best of friends!\n";

    cout << "\nCreating copies of player and Pokemon...\n";
    Player copiedPlayer = customPlayer;
    Pokemon copiedPokemon = customPokemon;
    cout << "Copied player: " << copiedPlayer.name << " with " << copiedPlayer.chosenPokemon.name << "!\n";
    cout << "Copied Pokemon: " << copiedPokemon.name << " with health " << copiedPokemon.health << "!\n";

    return 0;
}
