/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 02:58:43 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/01 03:16:53 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void
PhoneBook::addContact(Contact contact){
    if (_index + 1 > MAX_CONTACT){
        std::cout << "Error: Maximum contact exceeded" << std::endl;
    }
    else {
        contacts[_index++] = contact;
    }
}

void
PhoneBook::search()
{
    writeColumns(_header);

    for (int index = 0 ; index < _index ; index++) {
        std::array<std::string, 4> contact = {
            std::to_string(index),
            contacts[index].first_name,
            contacts[index].last_name,
            contacts[index].nickname
        };

        writeColumns(contact);
    }
}

void
PhoneBook::searchContact(int index)
{
    
}