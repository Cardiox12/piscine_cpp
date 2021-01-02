/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 22:14:35 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/02 23:12:13 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void
Weapon::setType(std::string newType)
{
	_type = newType;
}

const std::string
&Weapon::getType(void) const
{
	return (_type);
}