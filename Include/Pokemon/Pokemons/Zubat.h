#pragma once
#include "../../Include/Pokemon/Pokemon.h"

namespace N_Pokemon 
{
    namespace N_Pokemons 
    {

        class Zubat : public Pokemon 
        {
        private:
            void supersonic(Pokemon& target);

        public:
            Zubat();
        };

    }
}