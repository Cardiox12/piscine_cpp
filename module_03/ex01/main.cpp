/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 16:39:26 by bbellavi          #+#    #+#             */
/*   Updated: 2021/02/14 16:54:14 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	srand(time(nullptr));
	ScavTrap tony = ScavTrap{ "Tony" };
	ScavTrap eithan = ScavTrap{ "eithan" };
	ScavTrap test;

	eithan.takeDamage(10);
	tony.challengeNewcomer();

	test = eithan;

	tony.meleeAttack("Eithan");
	eithan.rangedAttack("Tony");
	return (0);
}