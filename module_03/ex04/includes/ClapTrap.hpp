/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:13:16 by bbellavi          #+#    #+#             */
/*   Updated: 2021/03/07 05:12:51 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <random>
#include <iostream>

class ClapTrap {
protected:
    std::string     _type = "ClapTrap";
    int				_hit_points;
    int				_max_hit_points;
    int				_energy_points;
    int				_max_energy_points;
    unsigned int	_level = 1;
    std::string		_name;
	int				_melee_attack_damage;
	int				_ranged_attack_damage;
	int				_armor_damage_reduction;
	int				getRandomNumber(unsigned int max) const;

public:
	ClapTrap();
	ClapTrap(
		int hit_points,
		int max_hit_points,
		int energy_points,
		int max_energy_points,
		unsigned int level,
		std::string name,
		int melee_attack_damage,
		int ranged_attack_damage,
		int armor_damage_reduction
	);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	virtual ~ClapTrap();

	const		std::string &getName() const;
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
