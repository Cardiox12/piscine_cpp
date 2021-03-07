//
// Created by kyoto on 07/03/2021.
//

#include "../includes/Peon.hpp"


Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog Zog" << std::endl;
}

Peon::Peon(const Peon &other) : Victim(other) { }

Peon &Peon::operator=(const Peon &other) {
    setName(other.getName());

    return *this;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}
