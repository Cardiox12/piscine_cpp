/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 14:16:51 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/29 15:54:42 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <string>
# include <ostream>
# include "Zombie.hpp"

class ZombieEvent {
private:
	std::string _type;
public:
	ZombieEvent();
	
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump(void);
	void	announce(Zombie *zombie);
};


#endif
