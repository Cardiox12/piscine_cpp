//
// Created by kyoto on 09/03/2021.
//

#include "includes/PlasmaRifle.hpp"
#include "includes/SuperMutant.hpp"
#include "includes/RadScorpion.hpp"
#include "includes/PowerFist.hpp"
#include "includes/Character.hpp"

int     main()
{
    auto *me = new Character("me");

    std::cout << *me;

    Enemy *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    return (0);
}