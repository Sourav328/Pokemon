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


}

void Game_End()
{
    cout << "Professor Oak: Ah, an excellent choice!" << endl;
    cout << "Professor Oak: But beware, Trainer," << endl;
    cout << "Professor Oak: This is only the beginning. Your journey is about to unfold." << endl;
    cout << "Professor Oak: Now let s see if you ve got what it takes to keep going!" << endl;
    cout << "Professor Oak: Good luck, and remember  Choose wisely!" << endl;
}

void Professor_Oak()
{
    cout << "                        " << endl;
    cout << "Professor Oak: Ah, young Trainer!" << endl;
    cout << "Professor Oak: I see you ve made a great start," << endl;
    cout << "Professor Oak: but do you really think we re done yet?" << endl;
    cout << "Professor Oak: No, no, no!" << endl;
    cout << "Professor Oak: We ve only just scratched the surface!" << endl;

}


int main()
{
    int choice;
    cout << "Which Pokemon would you like to choose? Enter the number: ";
    cin >> choice;
    string player_name;
    cout << "Trainer Enter Your Name : ";
    cin >> player_name;
    string chosenPokemon;

    if (choice == 1)
        switch (choice)
        {
        case 1:
            chosenPokemon = "Bulbasaur";
            cout << "                        " << endl;
            cout << "Professor Oak: You chose Bulbasaur! A wise choice.\n";
            break;
        case 2:
            chosenPokemon = "Charmander";
            cout << "                        " << endl;
            cout << "Professor Oak: You chose Charmander! A fiery choice.\n";
            break;
        case 3:
            chosenPokemon = "Squirtle";
            cout << "                        " << endl;
            cout << "Professor Oak: You chose Squirtle! A cool choice.\n";
            break;
        default:
            cout << "                        " << endl;
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
            chosenPokemon = "Pikachu";
            cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest!\n";
            break;

        }
    cout << "                        " << endl;
    cout << "Professor Oak: " << chosenPokemon << " And you, " << player_name << ", are going to be the best of friends!" << endl;
    cout << "Professor Oak: Your journey begins now! Get ready to explore "
        "the vast world of Pokemon!\n";


    Game_End();

    return 0;
}
