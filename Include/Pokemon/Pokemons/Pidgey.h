#pragma once
#include "../../Include/Pokemon/Pokemon.h"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Pidgey : public Pokemon 
        {
        private:
            void WingAttack(Pokemon& target);

        public:
            Pidgey();
        };

    }
}