/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:11:00 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/04 13:51:49 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int		main(int argc, char *argv[])
{
	if (argc == 4)
	{
		Replace repl{ argv[1], argv[2], argv[3] };

		repl.replace();
	}
	else
	{
		std::cout << "Usage: ./replace filename s1 s2" << std::endl;
		return (1);
	}
	return (0);
}