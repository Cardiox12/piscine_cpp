//
// Created by kyoto on 03/03/2021.
//

#ifndef NINJA_TRAP_H
#define NINJA_TRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap &other) : ClapTrap(other) {};
    virtual ~NinjaTrap();

    void ninjaShoebox(ClapTrap &enemy);
    void ninjaShoebox(ScavTrap &enemy);
    void ninjaShoebox(FragTrap &enemy);
};


#endif //EX03_NINJATRAP_H
