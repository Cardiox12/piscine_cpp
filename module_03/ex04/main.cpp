/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:17:04 by bbellavi          #+#    #+#             */
/*   Updated: 2021/03/07 05:38:46 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	SuperTrap strap{ "tony" };
	SuperTrap strap2;
	FragTrap ennemy{ "eithan" };

	// Testing two special methods
	strap.ninjaShoebox(ennemy);
	strap.vaulthunter_dot_exe(ennemy.getName());

	// Copy strap and test it
	strap2 = strap;
	strap2.ninjaShoebox(ennemy);
	return (0);
}
