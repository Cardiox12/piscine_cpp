/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:56:02 by bbellavi          #+#    #+#             */
/*   Updated: 2021/02/14 16:51:36 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default constructor" << std::endl;
    _hit_points = 100;
    _max_hit_points = 100;
    _energy_points = 50;
    _max_energy_points = 50;
    _level = 1;
    _name = std::string{ "unknown" };
    _melee_attack_damage = 20;
    _ranged_attack_damage = 15;
    _armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Parameter constructor" << std::endl;
    _hit_points = 100;
    _max_hit_points = 100;
    _energy_points = 50;
    _max_energy_points = 50;
    _level = 1;
    _melee_attack_damage = 20;
    _ranged_attack_damage = 15;
    _armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << _name << " is dying..." << std::endl;
}

ScavTrap&
ScavTrap::operator=(const ScavTrap &other)
{
	_hit_points = other._hit_points;
	_max_hit_points = other._max_hit_points;
	_energy_points = other._energy_points;
	_level = other._level;
	_name = other._name;
	_melee_attack_damage = other._melee_attack_damage;
	_ranged_attack_damage = other._ranged_attack_damage;
	_armor_damage_reduction = other._armor_damage_reduction;

	return (*this);
}

void
ScavTrap::challengeNewcomer(void)
{
	const unsigned int	index = getRandomNumber(CHALLENGES_SIZE);
	std::string			challenge;

	challenge = _challenges[index];

	std::cout << "ScavTrap: " << _name << " challenge set to [ " << challenge << " ]" << std::endl;
}


/* Private ------------------------------------------------------------------ */

int
ScavTrap::getRandomNumber(unsigned int max) const
{
	return (std::rand() % max);
}