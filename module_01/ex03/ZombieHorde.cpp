/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 16:11:41 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/29 16:38:54 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	_n = n;
	_horde = new Zombie *[n];

	for (int i = 0 ; i < _n ; i++){
		_horde[i] = new Zombie("horde");
	}
}

ZombieHorde::~ZombieHorde()
{
	for (int i = 0 ; i < _n ; i++){
		delete _horde[i];
	}
	delete[] _horde;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0 ; i < _n ; i++){
		_horde[i]->advert();
	}
}
