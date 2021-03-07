/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:17:30 by bbellavi          #+#    #+#             */
/*   Updated: 2021/03/07 04:17:32 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <NinjaTrap.hpp>

NinjaTrap::NinjaTrap() : ClapTrap() {
    _type = std::string{ "NinjaTrap" };
    std::cout << "NinjaTrap Default constructor" << std::endl;
    _hit_points= 60;
    _max_hit_points = 60;
    _energy_points = 120;
    _max_energy_points = 120;
    _melee_attack_damage = 60;
    _ranged_attack_damage = 5;
    _armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
    std::cout << "NinjaTrap Parameter constructor" << std::endl;
    _hit_points= 60;
    _max_hit_points = 60;
    _energy_points = 120;
    _max_energy_points = 120;
    _melee_attack_damage = 60;
    _ranged_attack_damage = 5;
    _armor_damage_reduction = 0;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "NinjaTrap: " << _name << " is dying..." << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &enemy) {
    std::cout << "NinjaTrap: " << _name << " shoebox attack in " << enemy.getName() << "'s face" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &enemy) {
    std::cout << "NinjaTrap: " << _name << " shoebox attack in " << enemy.getName() << "'s face" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &enemy) {
    std::cout << "NinjaTrap: " << _name << " shoebox attack in " << enemy.getName() << "'s face" << std::endl;
}
