//
// Created by kyoto on 22/03/2021.
//

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &other) : AMateria(other) {}

Ice &Ice::operator=(const Ice &other) {
    AMateria::operator=( other );
    return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const {
    return ( new Ice{ *this } );
}

void Ice::use(ICharacter &target) {
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
