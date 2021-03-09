//
// Created by kyoto on 09/03/2021.
//

#include "../includes/PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power First", 8, 50) {}
PowerFist::PowerFist(const AWeapon &other) : AWeapon(other) {}
PowerFist::~PowerFist() {}

PowerFist &PowerFist::operator=(const PowerFist &other) {
    setName(other.getName());
    setCost(other.getCost());
    setDamage(other.getDamage());

    return *this;
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

