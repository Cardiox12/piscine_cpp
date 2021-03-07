//
// Created by kyoto on 07/03/2021.
//

#include "../includes/Sorcerer.hpp"


Sorcerer::Sorcerer(std::string name, std::string title) : m_name{name }, m_title{title }
{
    std::cout << m_name << ", " << m_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
    m_name = other.m_name;
    m_title = other.m_title;
}

Sorcerer    &Sorcerer::operator=(const Sorcerer &other)
{
    m_name = other.m_name;
    m_title = other.m_title;

    return (*this);
}

Sorcerer::~Sorcerer() {
    std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}

const std::string   &Sorcerer::getName() const { return m_name; }
void                Sorcerer::setName(const std::string &name) { m_name = name; }
const std::string   &Sorcerer::getTitle() const { return m_title; }

void                Sorcerer::setTitle(const std::string &title) { m_title = title; }

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer)
{
    os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;

    return (os);
}
