/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 18:43:14 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/23 23:24:53 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony pony = Pony("Celestia", 5, "Shetland", 140);
	
	pony.to_string();
	pony.eat("banana");
	pony.sleep();
	pony.say("I'm living a real good life. :)");
}

void	ponyOnTheHeap()
{
	Pony *pony = new Pony("Applejack", 8, "Shetland", 167);
	
	pony->to_string();
	pony->eat("cyanure");
	pony->sleep();
	pony->say("I'm feeling sick, I think someone poisoned me. :(");
	delete pony;
	pony = nullptr;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
