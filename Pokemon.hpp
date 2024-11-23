#include <string>
enum class PokemonType;
using namespace std;

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;
    
    Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower)
        : name(p_name), type(p_type), maxHealth(p_maxHealth), health(p_maxHealth), attackPower(p_attackPower) {
    }


    Pokemon(string p_name, PokemonType p_type, int p_maxHealth)
        : name(p_name), type(p_type), maxHealth(p_maxHealth), health(p_maxHealth) {
    }
 
    void takeDamage(int damage);
    bool isFainted() const;
    void heal(); // Method to restore HP to max

    void attack(Pokemon& target) 
    {
        int damage = attackPower; // Use attack power for damage calculation
        cout << name << " attacks " << target.name << " for " << damage << " damage!\n";
        target.takeDamage(damage);
    }
    

};