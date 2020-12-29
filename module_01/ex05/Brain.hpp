/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:06:00 by bbellavi          #+#    #+#             */
/*   Updated: 2020/12/29 17:34:18 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <sstream>

class Brain {
private:
	int	_neurons;
public:
	Brain() : _neurons{ 100000 } {};
	Brain(int neurons) : _neurons{ neurons } {};

	std::string	identify() const;
};

#endif
