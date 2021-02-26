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

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default constructor" << std::endl;
	std::cout << getRandomQuote(QTYPE_BORN) << std::endl;
	_name = FRAG_TRAP_INITIALIZER;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Parameter constructor" << std::endl;
	std::cout << getRandomQuote(QTYPE_BORN) << std::endl;
}

FragTrap::FragTrap(const FragTrap &cls) : ClapTrap(cls)
{
    std::cout << "FragTrap Copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << getRandomQuote(QTYPE_DEATH) << std::endl;
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
	_armor_damage_reduction = cls._armor_damage_reduction;

	return (*this);
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

