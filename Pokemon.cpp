#include <iostream>
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
    cout << "Professor Oak: Good luck, and remember choose wisely!" << endl;
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

enum PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

int main()
{
    Game_Start();

    PokemonChoice chosen_pokemon = InvalidChoice;
    int choice;
    cout << "Which Pokemon would you like to choose? Enter the number: ";
    cin >> choice;

    string player_name;
    cout << "Trainer, Enter your name: ";
    cin >> player_name;

    
    switch (choice)
    {
    case 1:
        chosen_pokemon = Bulbasaur;
        cout << "                        " << endl;
        cout << "Professor Oak: You chose Bulbasaur! A wise and calm choice.\n";
        break;
    case 2:
        chosen_pokemon = Charmander;
        cout << "                        " << endl;
        cout << "Professor Oak: You chose Charmander! A fiery and brave choice.\n";
        break;
    case 3:
        chosen_pokemon = Squirtle;
        cout << "                        " << endl;
        cout << "Professor Oak: You chose Squirtle! A cool and steady choice.\n";
        break;
    default:
        
        chosen_pokemon = Charmander;
        cout << "                        " << endl;
        cout << "Professor Oak: Hmm, that doesn't seem right. Let's go with Charmander by default!\n";
        break;
    }

    
    Professor_Oak();
    cout << "                        " << endl;
    cout << "Professor Oak: " << (chosen_pokemon == Charmander ? "Charmander" : chosen_pokemon == Bulbasaur ? "Bulbasaur": "Squirtle")<< " and you, " << player_name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    Game_End();

    return 0;
}
