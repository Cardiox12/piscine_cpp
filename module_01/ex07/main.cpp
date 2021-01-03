/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:11:00 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/03 22:35:14 by bbellavi         ###   ########.fr       */
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
}