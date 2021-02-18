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

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor" << std::endl;
	_name = std::string{ "unknow" };
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Parameter constructor" << std::endl;
	_name = std::string{ name };
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	_hit_points = other._hit_points;
	_max_hit_points = other._max_hit_points;
	_energy_points = other._energy_points;
	_level = other._level;
	_name = other._name;
	_melee_attack_damage = other._melee_attack_damage;
	_ranged_attack_damage = other._ranged_attack_damage;
	_armor_damage_reduction = other._armor_damage_reduction;
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

void
ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "ScavTrap: " << _name << " ranged attack [ " << target << " ]" << std::endl;
}

void
ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "ScavTrap: " << _name << " melee attack [ " << target << " ]" << std::endl;
}

void
ScavTrap::takeDamage(unsigned int amount)
{
	int true_hit_points = _hit_points + _armor_damage_reduction;

	if (true_hit_points - amount >= 0)
		_hit_points = true_hit_points - amount;
	else
		_hit_points = 0;
	std::cout << "ScavTrap: " << _name << " received " << amount << " damages" << std::endl;
}

void
ScavTrap::beRepaired(unsigned int amount)
{
	if ((_hit_points + (int)amount) < _max_hit_points)
		_hit_points += amount;
	else
		_hit_points = _max_hit_points;
	std::cout << "ScavTrap: " << _name << " received " << amount << " HP" << std::endl;
}

/* Private ------------------------------------------------------------------ */

int
ScavTrap::getRandomNumber(unsigned int max) const
{
	return (std::rand() % max);
}