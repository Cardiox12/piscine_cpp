/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:38:22 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/05 16:55:14 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{

}

Fixed
&Fixed::operator=(const Fixed &fixed)
{
	_fixed = fixed._fixed;
	
	return (*this);
}

int
Fixed::getFixed() const
{
	return (_fixed);
}
