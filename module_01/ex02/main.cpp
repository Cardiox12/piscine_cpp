/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 12:51:59 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/29 15:55:36 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent zevent;
	Zombie		*current;

	srand((unsigned)time(0));
	zevent.setZombieType("random");
	for (int _ = 0 ; _ < 10 ; _++){
		current = zevent.randomChump();
		zevent.announce(current);
		delete current;
	}

	zevent.setZombieType("fixed");

	current = zevent.newZombie("Mark");
	zevent.announce(current);
	delete current;

	current = zevent.newZombie("Jeff");
	zevent.announce(current);
	delete current;

	current = zevent.newZombie("Bill");
	zevent.announce(current);
	delete current;
	return (0);
}
