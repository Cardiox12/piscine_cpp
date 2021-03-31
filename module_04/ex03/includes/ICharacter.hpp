#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include <array>

#include "AMateria.hpp"

class AMateria;

class ICharacter {
public:
	ICharacter();
	virtual ~ICharacter();
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int index) = 0;
	virtual void use(int index, ICharacter &target) = 0;
};


#endif
