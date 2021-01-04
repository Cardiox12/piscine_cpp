/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:13:32 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/03 23:58:59 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <fstream>
# include <iostream>

# define REPLACE_EXTENSION ".replace"

class Replace {
private:
	std::string		_filename;
	std::string		_s1;
	std::string 	_s2;
	std::ofstream	_outfile; // Outfile file descriptor
	std::ifstream	_file; // Fd of the current file

	void	str_replace(std::string &src, std::string s1, std::string s2) const;
	std::string	get_filename(std::string filename) const;
public:
	Replace(std::string filename, std::string s1, std::string s2) : 
		_filename{ filename },
		_s1{ s1 },
		_s2{ s2 }
	{};
	int	replace(void);
};

#endif