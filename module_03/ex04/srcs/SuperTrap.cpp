/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:17:20 by bbellavi          #+#    #+#             */
/*   Updated: 2021/03/07 05:35:30 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(
		100,
		100,
		120,
		120,
		1,
		"unknown",
		60,
		20,
		5
	) 
{
	std::cout << "SuperTrap: default constructor called" << std::endl;
};

SuperTrap::SuperTrap(std::string name) : ClapTrap(
		100,
		100,
		120,
		120,
		1,
		name,
		60,
		20,
		5
	) 
{
	std::cout << "SuperTrap: parameter constructor called" << std::endl;
};

SuperTrap::SuperTrap(const SuperTrap &cls) : ClapTrap(cls)
{
	std::cout << " SuperTrap: copy constructor called" << std::endl;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &cls)
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

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap: I'm dying..." << std::endl;
}