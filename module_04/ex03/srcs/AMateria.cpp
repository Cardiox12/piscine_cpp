//
// Created by kyoto on 22/03/2021.
//

#include "../includes/AMateria.hpp"

AMateria::AMateria(const std::string &type) : m_xp{ 0 }, m_type{ type } {}

AMateria::AMateria(const AMateria &other) : m_xp{ other.getXP() }, m_type{ other.getType() } {}

AMateria &AMateria::operator=(const AMateria &other) {
    m_type = other.getType();
    m_xp = other.getXP();

    return *this;
}

AMateria::~AMateria() {}

const std::string &AMateria::getType() const {
    return m_type;
}

unsigned int AMateria::getXP() const {
    return m_xp;
}

void AMateria::use(ICharacter &target) {
    (void)target;
    m_xp += 10;
}
