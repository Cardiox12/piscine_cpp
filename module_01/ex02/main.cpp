/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 12:51:59 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/25 15:23:03 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent zevent;
	Zombie		*current;

	zevent.setZombieType("random");
	for (int _ = 0 ; _ < 10 ; _++){
		current = zevent.randomChump();
		current->advert();
		delete current;
	}

	zevent.setZombieType("fixed");

	current = zevent.newZombie("Mark");
	current->advert();
	delete current;

	current = zevent.newZombie("Jeff");
	current->advert();
	delete current;

	current = zevent.newZombie("Bill");
	current->advert();
	delete current;
	return (0);
}
