/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:12:40 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/04 13:50:02 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string
Replace::get_filename(std::string name) const
{
	std::string filename{ "" };

	for (const char c : name){
		if (c == '.')
			break;
		filename += c;
	}
	return (filename);
}

void
Replace::str_replace(std::string &src, std::string s1, std::string s2) const
{
	size_t index{ 0 };

	while (true)
	{
		index = src.find(s1, index);
		if (index == std::string::npos)
			break;
		src.replace(index, s2.length(), s2);
		index += s2.length();
	}
}

int
Replace::replace(void)
{
	std::string line;
	std::string outfilename{ get_filename(_filename).append(REPLACE_EXTENSION) };
	
	_file = std::ifstream{ _filename };
	_outfile = std::ofstream{ outfilename };

	if (_s1 == "" || _s2 == "")
	{
		std::cerr << "String parameters must not be empty." << std::endl;
		return (1);
	}
	if (!_file)
	{
		std::cerr << "Could not open file." << std::endl;
		return (1);
	}
	if (!_outfile)
	{
		std::cerr << "Could not open outfile." << std::endl;
		return (1);
	}
	while (std::getline(_file, line))
	{
		str_replace(line, _s1, _s2);
		_outfile << line << std::endl;
	}
	return (0);
}