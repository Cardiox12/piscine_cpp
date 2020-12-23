/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 18:43:24 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/23 19:14:03 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PONY_HPP
# define FT_PONY_HPP

#include <iostream>
#include <string>

class Pony {
	public:
		Pony() : _name{ "unknow" }, _age{ 0 }, _breed{ "unknow" }, _height{ 0 } {};
		~Pony();
	private:
		std::string _name;
		uint8_t		_age;
		std::string	_breed;
		uint8_t		_height;
};

#endif
