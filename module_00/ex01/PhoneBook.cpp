/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 02:58:43 by bbellavi          #+#    #+#             */
/*   Updated: 2020/10/30 03:16:20 by bbellavi         ###   ########.fr       */
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
        contacts[++_index] = contact; 
    }
}

void
PhoneBook::showBook()
{
    for ( int index = 0 ; index < _index ; index++ ) {
        contacts[index].toString();
    }
}