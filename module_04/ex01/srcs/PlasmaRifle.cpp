//
// Created by kyoto on 09/03/2021.
//

#include "../includes/PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}
PlasmaRifle::PlasmaRifle(const AWeapon &other) : AWeapon(other) {}
PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &other) {
    setName(other.getName());
    setDamage(other.getDamage());
    setCost(other.getCost());

    return *this;
}

void PlasmaRifle::attack() const {
    std::cout << "piouuu piouuu piouuu" << std::endl;
}




