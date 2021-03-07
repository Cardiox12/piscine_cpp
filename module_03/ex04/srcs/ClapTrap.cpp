/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:12:53 by bbellavi          #+#    #+#             */
/*   Updated: 2021/03/07 05:12:35 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor" << std::endl;
    _name = std::string{ "unknown" };
}

ClapTrap::ClapTrap(
		int hit_points,
		int max_hit_points,
		int energy_points,
		int max_energy_points,
		unsigned int level,
		std::string name,
		int melee_attack_damage,
		int ranged_attack_damage,
		int armor_damage_reduction
	) : 
	_hit_points{ hit_points },
	_max_hit_points{ max_hit_points },
	_energy_points{ energy_points },
	_max_energy_points{ max_energy_points },
	_level{ level },
	_name{ name },
	_melee_attack_damage{ melee_attack_damage },
	_ranged_attack_damage{ ranged_attack_damage },
	_armor_damage_reduction{ armor_damage_reduction }
{

};

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Parameter constructor" << std::endl;
    _name = std::string{ name };
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap Copy constructor" << std::endl;
    _hit_points = other._hit_points;
    _max_hit_points = other._max_hit_points;
    _energy_points = other._energy_points;
    _level = other._level;
    _name = other._name;
    _melee_attack_damage = other._melee_attack_damage;
    _ranged_attack_damage = other._ranged_attack_damage;
    _armor_damage_reduction = other._armor_damage_reduction;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: " << _name << " is dying..." << std::endl;
}

void
ClapTrap::rangedAttack(const std::string &target) const
{
    std::cout << _type << ": " << _name << " ranged attack [ " << target << " ]" << std::endl;
}

void
ClapTrap::meleeAttack(const std::string &target) const
{
    std::cout << _type << ": " << _name << " melee attack [ " << target << " ]" << std::endl;
}

void
ClapTrap::takeDamage(unsigned int amount)
{
    int true_hit_points = _hit_points + _armor_damage_reduction;

    if (true_hit_points - amount >= 0)
        _hit_points = true_hit_points - amount;
    else
        _hit_points = 0;
    std::cout << _type << ": " << _name << " received " << amount << " damages" << std::endl;
}

void
ClapTrap::beRepaired(unsigned int amount)
{
    if ((_hit_points + (int)amount) < _max_hit_points)
        _hit_points += amount;
    else
        _hit_points = _max_hit_points;
    std::cout << _type << ": " << _name << " received " << amount << " HP" << std::endl;
}

int
ClapTrap::getRandomNumber(unsigned int max) const
{
    return (std::rand() % max);
}

const std::string &ClapTrap::getName() const {
    return _name;
}
