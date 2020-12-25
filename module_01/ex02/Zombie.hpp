/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 12:53:09 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/25 15:12:30 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
	std::string _name;
	std::string	_type;
public:
	Zombie(std::string name, std::string type) : _name{ name }, _type{ type } {};
	Zombie(std::string type) : _type{ type } {};
	
	void	advert(void);
};

#endif
