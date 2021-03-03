//
// Created by kyoto on 03/03/2021.
//

#include "includes/NinjaTrap.hpp"

int     main(void)
{
    NinjaTrap ninja{ "Tony" };
    FragTrap frag{ "Gigi" };
    ScavTrap scav{ "Eithan" };

//    Test normal attack
    ninja.meleeAttack(scav.getName());
    scav.rangedAttack(ninja.getName());
    ninja.meleeAttack(scav.getName());

//    Test shoebox
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(scav);
    return (0);
}
