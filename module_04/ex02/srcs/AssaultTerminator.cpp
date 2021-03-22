//
// Created by kyoto on 21/03/2021.
//

#include <iostream>
#include "../includes/AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &other) { (void)other; }

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I’ll be back..." << std::endl;
}

void AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
    std::cout <<  "* attacks with chainfists *" << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const {
    return ( new AssaultTerminator(*this) );
}

void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}
