/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:23:47 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/13 16:50:28 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	srand(time(nullptr));
	FragTrap trap{ "Tony" };
	FragTrap clap{ "Eithan" };

	trap.meleeAttack("Eithan");
	clap.takeDamage(30);
	clap.rangedAttack("Tony");
	trap.takeDamage(90);
	return (0);
}