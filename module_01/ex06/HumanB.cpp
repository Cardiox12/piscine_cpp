/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 23:20:49 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/02 23:28:42 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void
HumanB::attack() const
{
	if (_weapon != nullptr)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has now weapon" << std::endl;
}

void
HumanB::setWeapon(Weapon *newWeapon)
{
	_weapon = newWeapon;
}