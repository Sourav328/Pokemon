#include <string>
#include <vector>
namespace N_Pokemon 
{

    class Pokemon;

    struct Grass
    {
        string environmentType;
        vector<Pokemon>wildPokemonList;
        int encounterRate;
    };
}