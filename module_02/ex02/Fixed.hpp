/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 09:27:43 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/18 18:06:54 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>
# include <ostream>

class Fixed
{
private:
	static const int	_MAX_BITS = 8;
	int					_raw_bits;

	int		intToFixedPoint(const int raw) const;
	void	printRawBits(void) const;
public:
	Fixed();
	Fixed(const int raw);
	Fixed(const float raw);
	Fixed(const Fixed &cls);
	~Fixed();

	// Stream
	friend std::ostream&	operator<<(std::ostream &stream, const Fixed &cls);

	// Assignment
	Fixed&					operator=(const Fixed &other);

	// Comparison
	bool					operator<(const Fixed &other);
	bool					operator>(const Fixed &other);
	bool					operator<=(const Fixed &other);
	bool					operator>=(const Fixed &other);
	bool					operator==(const Fixed &other);
	bool					operator!=(const Fixed &other);

	// Arithmetic
	Fixed					operator*(const Fixed &other);
	Fixed					operator/(const Fixed &other);
	// Fixed					operator+(const Fixed &other);
	// Fixed					operator-(const Fixed &other);

	void	setRawBits(const int raw);
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;
};

#endif
