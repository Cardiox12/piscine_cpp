/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 02:58:52 by bbellavi          #+#    #+#             */
/*   Updated: 2020/10/10 02:59:21 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int		main(int argc, char *argv[])
{
	if (argc != 1)
	{
		for (int index = 1 ; index < argc ; index++)
		{
			for (char *s = argv[index] ; *s != '\0' ; s++)
				std::cout << to_upper(*s);
			std::cout << ' ';
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	
	return (0);
}
