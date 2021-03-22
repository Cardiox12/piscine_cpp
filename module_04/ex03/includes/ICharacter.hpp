#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include <array>

class ICharacter {
	std::string					m_name;
	std::array<AMateria*, 4>	m_materias;
public:
	ICharacter();
	virtual ~ICharacter();
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int index) = 0;
	virtual void use(int index, ICharacter &target) = 0;
};


#endif
