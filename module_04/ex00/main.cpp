#include "includes/Sorcerer.hpp"
#include "includes/Victim.hpp"

int     main(void)
{
    Sorcerer sorcerer("tony", "the daemon");
    Victim victim("eithan");

    std::cout << sorcerer << std::endl;
    std::cout << victim << std::endl;
    return (0);
}