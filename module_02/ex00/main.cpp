/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:52:24 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/05 16:55:01 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int		main(void)
{
	Fixed fixed{ 3 };

	std::cout << fixed.getFixed() << std::endl;
	Fixed sec = fixed;

	std::cout << sec.getFixed() << std::endl;

	Fixed third{ sec };

	std::cout << third.getFixed() << std::endl;
	return (0);
}