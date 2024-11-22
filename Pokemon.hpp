#include <string>
using namespace std;

enum class PokemonType;

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;


    
    Pokemon();

    
    Pokemon(std::string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower) 
        : name(p_name), type(p_type), maxHealth(p_maxHealth), health(p_maxHealth), attackPower(p_attackPower) {}

    void takeDamage(int damage); 
    bool isFainted() const; 
    void heal(); // Method to restore HP to max
    void attack(Pokemon& target) {
        int damage = attackPower; // Use attack power for damage calculation
        std::cout << name << " attacks " << target.name << " for " << damage << " damage!\n";
        target.takeDamage(damage);
    }
    void attack();

};