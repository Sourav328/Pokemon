#include <iostream>
using namespace std;

void Game_Start()
{
    cout << "Ah, Trainer!" << endl;
    cout << "Welcome to the world of Pokemon! I am Professor Oak." << endl;
    cout << "Today is a momentous day you will be choosing your very first Pokemon." << endl;
    cout << "Every great Trainer remembers this moment for the rest of their lives." << endl;
    cout << "So, choose wisely, young one!" << endl;
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle" << endl;
    cout << "Which Pokemon would you like to choose? Enter the number: ";

}

void Game_End()
{
    cout << "                        " << endl;
    cout << "Ah, an excellent choice!" << endl;
    cout << "But beware, Trainer," << endl;
    cout << "This is only the beginning. Your journey is about to unfold." << endl;
    cout << "Now let s see if you ve got what it takes to keep going!" << endl;
    cout << "Good luck, and remember  Choose wisely!" << endl;
}


int main()
{
    Game_Start();

    int choice;
    cin >> choice;

    string chosenPokemon;

    if (choice == 1)
    {
        chosenPokemon = "Bulbasaur";
        cout << "                        " << endl;
        cout << "You chose Bulbasaur! A wise choice.\n";
    }
    else if (choice == 2)
    {
        chosenPokemon = "Charmander";
        cout << "                        " << endl;
        cout << "You chose Charmander! A fiery choice.\n";
    }
    else if (choice == 3)
    {
        chosenPokemon = "Squirtle";
        cout << "                        " << endl;
        cout << "You chose Squirtle! A cool choice.\n";
    }
    else
    {
        cout << "                        " << endl;
        cout << "Invalid choice. Please restart the game.\n";
        return 0;
    }

    Game_End();

    return 0;
}
