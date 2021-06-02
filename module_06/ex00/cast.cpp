/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 06:09:17 by bbellavi          #+#    #+#             */
/*   Updated: 2021/06/03 00:29:58 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

static bool is_round(float n){
	return ( ( n - static_cast<int>( n ) ) == 0.0f );
}

void char_cast(double x){
	if ( x < std::numeric_limits<char>::min() || x > std::numeric_limits<char>::max() || isnanl(x) ){
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
	if ( x < std::numeric_limits<int>::min() || x > std::numeric_limits<int>::max() || isnanl(x) ){
		std::cout << "int: impossible" << std::endl;
	} else {
		int i = static_cast<int>( x );

		std::cout << "int: " << i << std::endl;
	}
}

void float_cast(double x){
	if ( x < std::numeric_limits<float>::lowest() || x > std::numeric_limits<float>::max() ){
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
