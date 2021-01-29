/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 09:27:41 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/29 10:04:21 by bbellavi         ###   ########.fr       */
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
	_raw_bits = raw;
}

Fixed::Fixed(const Fixed &cls)
{
	_raw_bits = cls.getRawBits();
}

Fixed::Fixed(const float raw)
{
	float	b = raw * (pow(2, _MAX_BITS));
	int		rb = roundf(b);

	_raw_bits = rb;
}

void
Fixed::setRawBits(const int raw)
{
	_raw_bits = raw;
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

float
Fixed::toFloat(void) const
{
	return ((float)_raw_bits / (1 << _MAX_BITS));
}

int
Fixed::toInt(void) const
{
	return ((_raw_bits >> 8));
}

// Operators overloading

std::ostream&
operator<<(std::ostream &stream, const Fixed &cls)
{
	int raw_bits = cls.getRawBits();

	if ((char)raw_bits == 0)
		stream << cls.toInt();
	else
		stream << cls.toFloat();

	return (stream);
}

Fixed&
Fixed::operator=(const Fixed &cls)
{
	_raw_bits = cls.getRawBits();

	return (*this);
}

// Comparison operators

bool
Fixed::operator!=(const Fixed &other)
{
	return (_raw_bits != other.getRawBits());
}

bool
Fixed::operator==(const Fixed &other)
{
	return (_raw_bits == other.getRawBits());
}

bool
Fixed::operator>=(const Fixed &other)
{
	return (_raw_bits >= other.getRawBits());
}

bool
Fixed::operator<=(const Fixed &other)
{
	return (_raw_bits <= other.getRawBits());
}

bool
Fixed::operator>(const Fixed &other)
{
	return (_raw_bits > other.getRawBits());
}

bool
Fixed::operator<(const Fixed &other)
{
	return (_raw_bits < other.getRawBits());
}

Fixed
Fixed::operator*(const Fixed &other)
{
	int result = ((_raw_bits * other.getRawBits() >> _MAX_BITS));
	
	return (Fixed{ result });
}

Fixed
Fixed::operator/(const Fixed &other)
{
	int result = ((_raw_bits * (1 << _MAX_BITS)) / other.getRawBits());

	return (Fixed{ result });
}

Fixed
Fixed::operator+(const Fixed &other)
{
	return (Fixed{_raw_bits + other.getRawBits() });
}

Fixed
Fixed::operator-(const Fixed &other)
{
	return (Fixed{_raw_bits - other.getRawBits() });
}

// Pre increment
Fixed&
Fixed::operator++()
{
	_raw_bits++;
	return *this;
}

// Post increment
Fixed
Fixed::operator++(int)
{
	Fixed tmp{ *this };

	operator++();
	return tmp;
}

// Pre decrement
Fixed&
Fixed::operator--()
{
	_raw_bits--;
	return *this;
}

// Post decrement
Fixed
Fixed::operator--(int)
{
	Fixed tmp{ *this };

	operator--();
	return tmp;
}

Fixed&
Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

Fixed&
Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed&
Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

const Fixed&
Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}