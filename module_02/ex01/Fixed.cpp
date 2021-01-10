/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 09:27:41 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/08 13:15:38 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{

}

Fixed::Fixed()
{
	setRawBits( 0 );
}

Fixed::Fixed(const int raw)
{
	setRawBits( raw );
}

Fixed::Fixed(const Fixed &cls)
{
	setRawBits( cls.getRawBits() );
}

Fixed::Fixed(const float raw)
{
	float	b = raw * (pow(2, _MAX_BITS));
	int		rb = roundf(b);

	_raw_bits = rb;
}

std::ostream&
operator<<(std::ostream &stream, const Fixed &cls)
{
	stream << cls.getRawBits() << std::endl;
	return (stream);
}

void
Fixed::setRawBits(const int raw)
{
	// Use power of two because shift loss info
	_raw_bits = (raw << _MAX_BITS);
}

int
Fixed::getRawBits(void) const
{
	return (_raw_bits);
}

void
Fixed::printRawBits(void) const
{
	const size_t total_size = sizeof(int) * 8;

	for (size_t i = total_size ; i > 0 ; i--){
		if (_raw_bits & (0x01 << i))
			std::cout << "1";
		else
			std::cout << "0";
		if ((i - 1) % 8 == 0)
			std::cout << " ";
	}
	std::cout << std::endl;
}