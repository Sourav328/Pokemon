#pragma once
#include <string>
#include <vector>
#include "../../Include/Pokemon/PokemonType.h"
using namespace std;

namespace N_Pokemon 
{

    
    struct Move;
    enum class PokemonType;

    
    class Pokemon 
    {
    public:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;
        vector<Move> moves;

        Pokemon();
        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(const Pokemon& other);
        ~Pokemon();

        bool IsFainted() const;
        void heal();
        void attack(Move selectedMove, Pokemon* target);
        void TakeDamage(int damage);

    protected:
        
        void selectAndUseMove(Pokemon* target);
    };
}