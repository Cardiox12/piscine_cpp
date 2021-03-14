//
// Created by tony on 14/03/2021.
//

#include "../includes/SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy( 170, "Super Mutant" ) {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) : Enemy( other ) {
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &other) {
    setHP(other.getHP());
    setType(other.getType());

    return *this;
}

void SuperMutant::takeDamage(int amount) {
    Enemy::takeDamage( amount - 3 );
}
