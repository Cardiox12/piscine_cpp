/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 02:58:43 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/01 02:41:04 by bbellavi         ###   ########.fr       */
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
    int search_index;

    writeColumns(_header);

    for (int index = 0 ; index < _index ; index++) {
        std::array<std::string, 4> contact = _Contact_to_array(std::to_string(index), contacts[index]);

        writeColumns(contact);
    }
    std::cout << std::endl << std::endl << "Search index : ";
    std::cin >> search_index;
    std::cout << std::endl;
    searchContact(search_index);
}

void
PhoneBook::searchContact(int index)
{
    if (index < 0 || index > MAX_CONTACT) {
        std::cout << "Invalid index: must be greater than 0 and less than 8" << std::endl;
    }
    else if (index > _index - 1) {
        std::cout << "No contact for index " << index << std::endl;
    }
    else {
        Contact contact = contacts[index];

        std::cout << "Name" << std::setw(15) << " : " << contact.first_name << std::endl;
        std::cout << "Last name" << std::setw(15) << " : " << contact.last_name << std::endl;
        std::cout << "Pseudo" << std::setw(15) << " : " << contact.nickname << std::endl;
    }
}