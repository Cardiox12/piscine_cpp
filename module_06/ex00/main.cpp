/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 22:45:25 by bbellavi          #+#    #+#             */
/*   Updated: 2021/06/18 16:33:12 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"
#include <string>

static void	cast_string(const std::string &s)
{
	double x;

	if ( s.length() == 1 && isalpha(s[0]) ){
		x = s[0];
	} else {
		x = atof(s.c_str());

	}

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