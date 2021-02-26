/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:56:08 by bbellavi          #+#    #+#             */
/*   Updated: 2021/02/14 16:40:11 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
#include "ClapTrap.hpp"

# define CHALLENGES_SIZE 4

class ScavTrap : public ClapTrap
{
	std::string		_challenges[CHALLENGES_SIZE] = {
		"Destroy the World",
		"Destroy all enemies",
		"Headshot all enemies",
		"Suicide"
	};

	int			getRandomNumber(unsigned int max) const;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	virtual ~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &other);

	void		challengeNewcomer(void);
};

#endif
