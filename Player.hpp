
#include <string>
#include "Pokemon.hpp"
using namespace std;
namespace N_Player 
{

    class Player 
    {
    public:
        std::string name;
        Pokemon chosenPokemon;

        Player(); // Default constructor
        Player(string name, string p_name, Pokemon p_chosenPokemon); // Parameterized constructor

        void choosePokemon(int choice); // Method to choose a Pokemon
    };
}