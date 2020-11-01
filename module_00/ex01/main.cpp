/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 02:46:22 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/01 02:55:07 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        else if (command == "SEARCH") {
            book.search();
        }
        else if (command == "EXIT") {
            exit(0);
        }
    }
    return (0);
}