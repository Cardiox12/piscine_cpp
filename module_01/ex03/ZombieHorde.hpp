/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:22:19 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/29 16:28:14 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_CPP
# define ZOMBIE_HORDE_CPP

#include "Zombie.hpp"

class ZombieHorde {
private:
	int		_n;
	Zombie	**_horde;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void	announce(void);
};

#endif
