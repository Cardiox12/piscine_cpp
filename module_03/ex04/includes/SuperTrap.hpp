/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:17:41 by bbellavi          #+#    #+#             */
/*   Updated: 2021/03/07 05:34:03 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &cls);
	SuperTrap	&operator=(const SuperTrap &cls);
	virtual		~SuperTrap();

};


#endif //SUPERTRAP_H
