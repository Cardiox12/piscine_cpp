/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 14:16:51 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/25 15:23:35 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <string>
# include <ostream>
# include "Zombie.hpp"

# define NAMES_SIZE 10

static const std::string NAMES[NAMES_SIZE] = {
	"Gerald", "Theresa", "Bernadette", "Derek", "Vicki",
	"Sarah", "Wayne", "Rebecca", "Mary", "Lilliam",
};

class ZombieEvent {
private:
	std::string _type;
public:
	ZombieEvent();
	
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump(void);
};


#endif
