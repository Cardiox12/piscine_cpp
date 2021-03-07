/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:42:24 by bbellavi          #+#    #+#             */
/*   Updated: 2021/02/14 15:51:47 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(void)
{
	std::cout << getRandomQuote(QTYPE_DEATH) << std::endl;
}

FragTrap::FragTrap()
{
	std::cout << getRandomQuote(QTYPE_BORN) << std::endl;
	_name = FRAG_TRAP_INITIALIZER;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << getRandomQuote(QTYPE_BORN) << std::endl;
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
	_hit_points = cls._hit_points;
	_max_hit_points = cls._max_hit_points;
	_energy_points = cls._energy_points;
	_max_energy_points = cls._max_energy_points;
	_level = cls._level;
	_name = cls._name;
	_melee_attack_damage = cls._melee_attack_damage;
	_ranged_attack_damage = cls._ranged_attack_damage;
	_armor_attack_reduction = cls._armor_attack_reduction;
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
	std::cout << getRandomQuote(QTYPE_MELEE) << std::endl;
}

void
FragTrap::takeDamage(unsigned int amount)
{
	int true_hit_points = _hit_points + _armor_attack_reduction;

	if (true_hit_points - amount >= 0)
		_hit_points = true_hit_points - amount;
	else
		_hit_points = 0;
	std::cout << "<" << _name << ">";
	std::cout << " : Hit by " << amount << " damages" << std::endl;
	if (_hit_points < 20)
		std::cout << getRandomQuote(QTYPE_CRITIC_HIT) << std::endl;
}

void
FragTrap::beRepaired(unsigned int amount)
{
	if ((_hit_points + (int)amount) < _max_hit_points)
		_hit_points += amount;
	else
		_hit_points = _max_hit_points;
	std::cout << "<" << _name << ">";
	std::cout << " : Received " << amount << "HP" << std::endl;
}

void
FragTrap::vaulthunter_dot_exe(std::string const &target) const
{
	int index = getRandomNumber(5);
	int damage = getRandomNumber(50);

	std::cout << getRandomQuote(QTYPE_VAULT_EXE_ACTIVATED) << std::endl;
	printAttackMessage(_name, target, g_vh_attacks[index], damage);
}

// Private

std::string
FragTrap::getRandomQuote(unsigned int type) const
{
	int randomIndex = getRandomNumber(g_all_quotes_sizes[type]);
	
	return (g_all_quotes[type][randomIndex]);
}

int
FragTrap::getRandomNumber(unsigned int max) const
{
	return (std::rand() % max);
}

void
FragTrap::printAttackMessage(std::string name, std::string target, std::string type, unsigned int damage) const
{
	std::cout	<< "FR4G-TP : "
				<< "<" << name << ">"
				<< " attack "
				<< "<" << target << ">"
				<< " with " << type << " attack, "
				<< "causing "
				<< "<" << damage << ">"
				<< " points of damage!"
				<< std::endl;
}

