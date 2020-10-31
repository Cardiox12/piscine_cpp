/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 02:46:22 by bbellavi          #+#    #+#             */
/*   Updated: 2020/10/31 23:49:00 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int
main()
{
    PhoneBook book;

    while (true){
        std::string command;

        std::cout << ">>> ";
        std::cin >> command;

        if (command == "ADD") {
            Contact contact;

            contact.askForInfos();
            book.addContact(contact);
        } 
        else if (command == "SHOW") {
            book.showBook();
        }
        else if (command == "EXIT") {
            exit(0);
        }
    }
    return (0);
}