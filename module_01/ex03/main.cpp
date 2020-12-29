/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:21:53 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/29 16:52:41 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde horde{10};

	srand((unsigned)time(0));
	horde.announce();
	return (0);
}