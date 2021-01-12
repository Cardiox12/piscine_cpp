/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:23:47 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/12 20:25:34 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap trap{ "Tony" };
	FragTrap clap{ "Eithan" };

	trap.meleeAttack("Eithan");
	clap.takeDamage(30);
	clap.rangedAttack("Tony");
	trap.takeDamage(20);
	return (0);
}