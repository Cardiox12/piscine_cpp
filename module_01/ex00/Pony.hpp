/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 18:43:24 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/23 23:18:01 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PONY_HPP
# define FT_PONY_HPP

#include <iostream>
#include <string>

class Pony {
	public:
		Pony() : _name{ "unknow" }, _age{ 0 }, _breed{ "unknow" }, _height{ 0 } {};
		Pony(std::string name, unsigned int age, std::string breed, unsigned int height) : 
			_name{ name },
			_age{ age },
			_breed{ breed },
			_height{ height }
		{};
		~Pony();

		void	to_string();
		void	eat(std::string food);
		void	sleep(void);
		void	say(std::string what);
	private:
		std::string		_name;
		unsigned int	_age;
		std::string		_breed;
		unsigned int	_height;
};

#endif
