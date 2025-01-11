#pragma once
#include <string>
#include "PokemonType.h"
using namespace std;

namespace N_Pokemon
{
    class Pokemon 
    {
    public:
        string name;
        PokemonType type;
        int health=50;
        int maxHealth;
        int attackPower;

        Pokemon();
        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(const Pokemon& other);

        void TakeDamage(int damage);
        bool IsFainted() const;
        void Heal();

