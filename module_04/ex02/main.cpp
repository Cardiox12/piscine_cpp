//
// Created by tony on 19/03/2021.
//

#include "includes/Squad.hpp"
#include "includes/TacticalMarine.hpp"
#include "includes/AssaultTerminator.hpp"
#include <iostream>

int main()
{
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;
    ISquad *vlc = new Squad;

    vlc->push(bob);
    vlc->push(jim);

    std::cout << "==========================================" << std::endl;
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc->getUnit(i);

        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
        std::cout << "==========================================" << std::endl;
    }
    delete vlc;

    return 0;
}