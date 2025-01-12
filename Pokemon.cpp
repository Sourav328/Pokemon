#include "Pokemon.h"
#include <iostream>
using namespace std;

namespace N_Pokemon
{
    Pokemon::Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50), maxHealth(50), attackPower(10) {}

    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower)
        : name(p_name), type(p_type), health(p_health), maxHealth(p_health), attackPower(p_attackPower) {
    }

    Pokemon::Pokemon(const Pokemon& other)
        : name(other.name), type(other.type), health(other.health), maxHealth(other.maxHealth), attackPower(other.attackPower) {
    }

    void Pokemon::TakeDamage(int damage) {
        health -= damage;
        if (health < 0) health = 0;
    }

    bool Pokemon::IsFainted() const { return health <= 0; }

    void Pokemon::Heal() { health = maxHealth; }

    void Pokemon::Attack(Pokemon& target) const {
        cout << name << " attacks " << target.name << " for " << attackPower << " damage!\n";
        target.TakeDamage(attackPower);
    }

}