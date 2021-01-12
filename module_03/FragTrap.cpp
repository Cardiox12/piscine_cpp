/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:42:24 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/12 20:23:39 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(void)
{
	std::cout	<< "Argh arghargh death gurgle gurglegurgle urgh... death."
				<< std::endl;
}

FragTrap::FragTrap()
{
	std::cout << "I'm now alive Yeee-hay!" << std::endl;
	_name = FRAG_TRAP_INITIALIZER;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "I'm now alive Yeee-hay!" << std::endl;
	_name = name;
}

FragTrap::FragTrap(const FragTrap &cls)
{
	_hit_points = cls._hit_points;
	_max_hit_points = cls._max_hit_points;
	_energy_points = cls._energy_points;
	_max_energy_points = cls._max_energy_points;
	_level = cls._level;
	_name = cls._name;
	_melee_attack_damage = cls._melee_attack_damage;
	_ranged_attack_damage = cls._ranged_attack_damage;
	_armor_attack_reduction = cls._armor_attack_reduction;
}

FragTrap&
FragTrap::operator=(const FragTrap &cls)
{
	*this = cls;

	return (*this);
}

void
FragTrap::rangedAttack(std::string const &target) const
{
	printAttackMessage(_name, target, "ranged", _ranged_attack_damage);
}

void
FragTrap::meleeAttack(std::string const &target) const
{
	printAttackMessage(_name, target, "melee", _melee_attack_damage);
}

void
FragTrap::takeDamage(unsigned int amount)
{
	int true_hit_points = _hit_points + _armor_attack_reduction;

	if (true_hit_points - amount >= 0)
		_hit_points = true_hit_points - amount;
	else
		_hit_points = 0;
	std::cout << "Ho no, my life if " << _hit_points << std::endl;
}

void
FragTrap::beRepaired(unsigned int amount)
{
	if (_hit_points + amount < _max_hit_points)
		_hit_points += amount;
	else
		_hit_points = _hit_points;
	std::cout << "Hell yes, I'm ready to rock with " << _hit_points << " HP!" << std::endl;
}

// Private

// int
// FragTrap::getRandomIndex(unsigned int max) const
// {
	
// }

void
FragTrap::printAttackMessage(std::string name, std::string target, std::string type, unsigned int damage) const
{
	std::cout	<< "FR4G-TP " 
				<< "<" << name << ">"
				<< " attacks "
				<< "<" << target << ">"
				<< " at " << type << ", "
				<< "causing "
				<< "<" << damage << ">"
				<< " points of damage!"
				<< std::endl;
}

