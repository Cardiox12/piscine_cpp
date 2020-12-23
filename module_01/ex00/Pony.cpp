/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 23:25:14 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/23 23:25:23 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::~Pony()
{
	std::cout << "I'm dieing in the heap's hell ..." << std::endl;
}

void
Pony::to_string()
{
	std::cout << "Hello I'm a little pony named " << _name << " I'm " << _age << " years old, I'm a " 
	<< _breed << " little pony and I'm " << _height << " centimeters." << std::endl;
}

void
Pony::eat(std::string food)
{
	std::cout << "I'm eating " << food << std::endl;
}

void
Pony::sleep(void)
{
	std::cout << "I'm going to sleep, I wish you a very good night. <3" << std::endl;
}

void
Pony::say(std::string what)
{
	std::cout << what << std::endl;
}
