//
// Created by kyoto on 09/03/2021.
//

#include "includes/PlasmaRifle.hpp"
#include "includes/SuperMutant.hpp"

int     main()
{
    PlasmaRifle weapon;
    SuperMutant mutant;

    weapon.attack();
    mutant.takeDamage(10);
    return (0);
}