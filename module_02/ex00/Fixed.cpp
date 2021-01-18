/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:38:22 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/18 18:02:17 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed()
{
	_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed)
{
	_fixed = fixed;
}

Fixed::Fixed(const Fixed &cls)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixed = cls.getRawBits();
}

Fixed
&Fixed::operator=(const Fixed &cls)
{
	_fixed = cls.getRawBits();

	std::cout << "Assignation operator called" << std::endl;

	return (*this);
}

int
Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed);
}

void
Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}
