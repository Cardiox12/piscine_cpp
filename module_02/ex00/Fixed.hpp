/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:34:56 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/05 16:55:08 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	static const int	_MAX_BITS = 8;
	int					_fixed;

public:
	Fixed() : _fixed{ 0 } {};
	Fixed(int fixed) : _fixed{ fixed } {};
	Fixed(const Fixed &cls) : _fixed{ cls._fixed } {};
	~Fixed();
	Fixed	&operator=(const Fixed &fixed);

	int	getFixed() const;
};

#endif
