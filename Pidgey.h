#pragma once
#include "Pokemon.h"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Pidgey : public Pokemon {
        public:
            Pidgey();
            void WingAttack(Pokemon& target);
        };

    }
}