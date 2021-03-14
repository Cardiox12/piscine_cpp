//
// Created by kyoto on 09/03/2021.
//

#include "includes/PlasmaRifle.hpp"
#include "includes/SuperMutant.hpp"
#include "includes/RadScorpion.hpp"

int     main()
{
    PlasmaRifle weapon;
    SuperMutant mutant;
    RadScorpion scorpion;

    weapon.attack();
    mutant.takeDamage(10 );
    scorpion.takeDamage( 10 );

    std::cout << "Mutant hp : " << mutant.getHP() << std::endl;
    std::cout << "Scorpion hp : " << scorpion.getHP() << std::endl;
    return (0);
}