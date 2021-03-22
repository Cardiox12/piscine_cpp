//
// Created by tony on 22/03/2021.
//

#include "Cure.hpp"

Cure &Cure::operator=(const Cure &other) {
    AMateria::operator=(other);
    return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const {
    return ( new Cure( *this ) );
}

void Cure::use(ICharacter &target) {
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
