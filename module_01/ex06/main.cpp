/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 23:00:27 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/02 23:28:57 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int		main(void)
{
	{
		Weapon weapon = Weapon("crude spiked club");

		HumanA tony = HumanA("Tony", weapon);
		tony.attack();
		weapon.setType("some other type of weapon");
		tony.attack();
	}
	{
		Weapon weapon = Weapon("crude spiked club");

		HumanB lylian = HumanB("Lylian");
		lylian.setWeapon(&weapon);
		lylian.attack();
		weapon.setType("some other type of weapon");
		lylian.attack();
	}
	return (0);
}