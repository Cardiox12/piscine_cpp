/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 02:54:31 by bbellavi          #+#    #+#             */
/*   Updated: 2020/10/31 23:44:05 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void
Contact::askForInfos()
{
    std::cout << "First name : ";
    std::cin >> first_name;

    // std::cout << "Last name : ";
    // std::cin >> last_name;

    // std::cout << "Nickname : ";
    // std::cin >> nickname;

    // std::cout << "Login : ";
    // std::cin >> login;

    // std::cout << "Postal address : ";
    // std::cin >> postal_addr;

    // std::cout << "Email address : ";
    // std::cin >> email_addr;

    // std::cout << "Phone number : ";
    // std::cin >> phone_number;

    // std::cout << "Birthdate : ";
    // std::cin >> birthdate;

    // std::cout << "Favorite meal : ";
    // std::cin >> fav_meal;

    // std::cout << "Underwear color : ";
    // std::cin >> underwear_color;

    // std::cout << "Darkest secret : ";
    // std::cin >> darkest_secret;

    std::cout << std::endl;
}

void
Contact::toString()
{
    std::cout << "First name : " << first_name << std::endl;

    std::cout << "Last name : " << last_name << std::endl;

    std::cout << "Nickname : " << nickname << std::endl;

    std::cout << "Login : " << login << std::endl;

    std::cout << "Postal address : " << postal_addr << std::endl;

    std::cout << "Email address : " << email_addr << std::endl;

    std::cout << "Phone number : " << phone_number << std::endl;

    std::cout << "Birthdate : " << birthdate << std::endl;

    std::cout << "Favorite meal : " << fav_meal << std::endl;

    std::cout << "Underwear color : " << underwear_color << std::endl;

    std::cout << "Darkest secret : " << darkest_secret << std::endl;
}