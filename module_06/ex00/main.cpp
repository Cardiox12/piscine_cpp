/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 22:45:25 by bbellavi          #+#    #+#             */
/*   Updated: 2021/06/03 00:27:35 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"
#include <string>

// static bool is_valid_literal(const std::string &s){
// 	if ( s.length() == 1 && isalpha )
// 	for ( const char &c : s ){
// 		if ( !isdigit( c ) ){
// 			return (false);
// 		}
// 	}
// 	return (true);
// }

static void	cast_string(const std::string &s)
{
	double x = std::stod(s);

	for ( int i = 0 ; i < CAST_N_FN ; i++ ){
		cast_fns[i](x);
	}
}

int		main(int argc, char *argv[])
{
	if (argc > 1){
		std::string literal = argv[ 1 ];

		cast_string( literal );
	}
	return (0);
}