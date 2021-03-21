//
// Created by kyoto on 21/03/2021.
//

#include <iostream>
#include "../includes/TacticalMarine.hpp"


TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &other) {}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh..." << std::endl;
}

void TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const {
    return ( new TacticalMarine(*this) );
}

void TacticalMarine::meleeAttack() const {
    std::cout <<  "* attacks with a chainsword *" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}
