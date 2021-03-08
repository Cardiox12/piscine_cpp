#include "includes/Sorcerer.hpp"
#include "includes/Victim.hpp"
#include "includes/Peon.hpp"
#include "includes/Pony.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Pony kim("Kim");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(kim);
    return 0;
}