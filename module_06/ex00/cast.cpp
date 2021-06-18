/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 06:09:17 by bbellavi          #+#    #+#             */
/*   Updated: 2021/06/18 16:32:56 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

static bool is_round(float n){
	return ( ( n - static_cast<int>( n ) ) == 0.0f );
}

void char_cast(double x){
	if ( x < CHAR_MIN || x > CHAR_MAX || isnanl(x) ){
		std::cout << "char: impossible" << std::endl;
	} else {
		char c = static_cast<char>( x );

		if ( isprint( c ) ){
			std::cout << "char: '" << c << "'" << std::endl;
		} else {
			std::cout << "char: Non displayable" << std::endl;
		}
	}
}

void int_cast(double x){
	if ( x < INT_MIN || x > INT_MAX || isnanl(x) ){
		std::cout << "int: impossible" << std::endl;
	} else {
		int i = static_cast<int>( x );

		std::cout << "int: " << i << std::endl;
	}
}

void float_cast(double x){
	if ( x < -FLT_MAX || x > FLT_MAX ){
		std::cout << "float: impossible" << std::endl;
	} else {
		float f = static_cast<float>( x );
		
		if ( is_round( f ) ){
			std::cout << "float: " << f << ".0f" << std::endl;
		} else {
			std::cout << "float: " << f << "f"<< std::endl;
		}
	}
}

void double_cast(double x){
	if ( is_round( x ) ){
		std::cout << "double: " << x << ".0" << std::endl;
	} else {
		std::cout << "double: " << x << std::endl;
	}
}
