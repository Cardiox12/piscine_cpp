/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 23:31:54 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/23 23:37:31 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void memoryLeak()
{
	std::string	*panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int		main(void)
{
	memoryLeak();
	return (0);
}