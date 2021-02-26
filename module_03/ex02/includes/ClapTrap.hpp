/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:13:16 by bbellavi          #+#    #+#             */
/*   Updated: 2021/02/18 23:14:00 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <random>
#include <iostream>

class ClapTrap {
protected:
    std::string     _type = "ClapTrap";
    int				_hit_points = 100;
    int				_max_hit_points = 100;
    int				_energy_points = 100;
    int				_max_energy_points = 100;
    unsigned int	_level = 1;
    std::string		_name;
    int				_melee_attack_damage = 30;
    int				_ranged_attack_damage = 20;
    int				_armor_damage_reduction = 5;

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
};

#endif
