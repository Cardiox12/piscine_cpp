/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 23:12:24 by bbellavi          #+#    #+#             */
/*   Updated: 2021/02/18 23:12:46 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/FragTrap.hpp"
#include "includes/ScavTrap.hpp"

int		main(void)
{
    ScavTrap tony{ "Tony" };
    FragTrap eithan{ "Eithan" };
    ScavTrap tony_copy = tony;
    FragTrap eithan_copy = eithan;

    tony.meleeAttack("Justine bieber");
    eithan.meleeAttack("Hitler");

    tony.rangedAttack("Justin trudeau");
    eithan.rangedAttack("NeoHitler");

    tony.takeDamage(40);
    eithan.takeDamage(50);

    tony.beRepaired(15);
    eithan.beRepaired(20);

    tony.challengeNewcomer();
    eithan.vaulthunter_dot_exe("Trump");

	return (0);
}