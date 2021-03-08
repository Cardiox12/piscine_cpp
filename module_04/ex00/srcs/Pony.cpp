//
// Created by kyoto on 08/03/2021.
//

#include "../includes/Pony.hpp"
#include "../includes/Victim.hpp"

Pony::~Pony()
{
    std::cout << "No, what's the world will becoming without Pony ??" << std::endl;
}

Pony::Pony(std::string name) : Victim(name)
{
    std::cout << "Pony pony pony, my little pony" << std::endl;
}

Pony::Pony(const Pony &other) : Victim(other)
{

}

Pony    &Pony::operator=(const Pony &other)
{
    setName(other.getName());

    return *this;
}

void    Pony::getPolymorphed() const
{
    std::cout << getName() << " has been turned into a little snake called Python, you like Python ?" << std::endl;
}