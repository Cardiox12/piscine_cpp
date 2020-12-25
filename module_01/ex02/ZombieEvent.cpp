/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 14:33:56 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/25 15:23:19 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	_type = "unknow";
	srand((unsigned)time(0));
}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, _type));
}

Zombie	*ZombieEvent::randomChump(void)
{
	int randomIndex = rand() % NAMES_SIZE;
	
	return (newZombie(NAMES[randomIndex]));
}
