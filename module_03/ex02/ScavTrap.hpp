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

# define CHALLENGES_SIZE 4

class ScavTrap
{
private:
	int				_hit_points = 100;
	int				_max_hit_points = 100;
	int				_energy_points = 50;
	int				_level = 1;
	std::string		_name;
	int				_melee_attack_damage = 20;
	int				_ranged_attack_damage = 15;
	int				_armor_damage_reduction = 3;
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
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &other);

	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);
};

#endif
