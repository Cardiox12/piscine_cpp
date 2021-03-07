/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:13:16 by bbellavi          #+#    #+#             */
/*   Updated: 2021/03/07 05:41:36 by bbellavi         ###   ########.fr       */
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

    int			getRandomNumber(unsigned int max) const;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	virtual ~ClapTrap();

    void		rangedAttack(std::string const &target) const;
    void		meleeAttack(std::string const &target) const;
    void		takeDamage(unsigned int amount);
    void		beRepaired(unsigned int amount);
    const		std::string &getName() const;
};

#endif
