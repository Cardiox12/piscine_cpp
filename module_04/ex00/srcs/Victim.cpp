//
// Created by kyoto on 07/03/2021.
//

#include "../includes/Victim.hpp"


Victim::Victim(std::string name) : m_name{ name }
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &other)
{
    m_name = other.m_name;
}

Victim &Victim::operator=(const Victim &other) {
    m_name = other.m_name;

    return *this;
}

Victim::~Victim()
{
    std::cout << "Victim " << m_name << " just died for no apparent reason!" << std::endl;
}

const std::string &Victim::getName() const {
    return m_name;
}

void Victim::setName(const std::string &name)
{
    m_name = name;
}

void Victim::getPolymorphed() const
{
    std::cout << m_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Victim &victim) {
    os << "I'm " << victim.getName() << " and I like otters!" << std::endl;

    return os;
}
