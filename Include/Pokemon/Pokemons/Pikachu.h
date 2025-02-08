#pragma once
#include "../../Include/Pokemon/Pokemon.h"

namespace N_Pokemon 
{
    namespace N_Pokemons 
    {

        class Pikachu : public Pokemon 
        {
        private:
            void thunderShock(Pokemon& target);

        public:
            Pikachu();
        };

    }
}