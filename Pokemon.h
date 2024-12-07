#pragma once
#include <string>
#include "PokemonType.h"

namespace N_Pokemon
{
    class Pokemon {
    public:
        std::string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;

        Pokemon();
        Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(const Pokemon& other);

        void TakeDamage(int damage);
        bool IsFainted() const;
        void Heal();
        void Attack(Pokemon& target);
        void Attack(Pokemon& target) const;
    };
}