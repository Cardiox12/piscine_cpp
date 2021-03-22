#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria {
	unsigned int	m_xp;
	std::string		m_type;
public:
	AMateria(const std::string &type);
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();

	const std::string &getType() const;
	unsigned int getXP() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
