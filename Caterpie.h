#pragma once
#include "Pokemon.h"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Caterpie : public Pokemon 
        {

        private:
            void bugBite(Pokemon& target);

        public:
            Caterpie();  
        };

    }
}