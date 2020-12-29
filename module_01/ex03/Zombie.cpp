/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 14:09:06 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/29 16:28:22 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::advert(void)
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiinnnns" << std::endl;
}

Zombie::Zombie(std::string type)
{
	int randomIndex = rand() % NAMES_SIZE;

	_type = type;
	_name = NAMES[randomIndex];
}
