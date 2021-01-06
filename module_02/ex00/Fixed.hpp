/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:34:56 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/06 09:15:52 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed 
{
private:
	static const int	_MAX_BITS = 8;
	int					_fixed;

public:
	Fixed();
	Fixed(int fixed);
	Fixed(const Fixed &cls);
	~Fixed();
	Fixed	&operator=(const Fixed &cls);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
