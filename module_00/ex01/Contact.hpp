/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 02:22:00 by bbellavi          #+#    #+#             */
/*   Updated: 2020/10/30 03:13:51 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONACT_HPP
# define _CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{

    public:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_addr;
    std::string email_addr;
    std::string phone_number;
    std::string birthdate;
    std::string fav_meal;
    std::string underwear_color;
    std::string darkest_secret;

    Contact() :
    first_name(""),
    last_name(""),
    nickname(""),
    login(""),
    postal_addr(""),
    email_addr(""),
    phone_number(""),
    birthdate(""),
    fav_meal(""),
    underwear_color(""),
    darkest_secret("") {};

    Contact(
        std::string _first_name,
        std::string _last_name,
        std::string _nickname,
        std::string _login,
        std::string _postal_addr,
        std::string _email_addr,
        std::string _phone_number,
        std::string _birthdate,
        std::string _fav_meal,
        std::string _underwear_color,
        std::string _darkest_secret
    ) :
    first_name(_first_name),
    last_name(_last_name),
    nickname(_nickname),
    login(_login),
    postal_addr(_postal_addr),
    email_addr(_email_addr),
    phone_number(_phone_number),
    birthdate(_birthdate),
    fav_meal(_fav_meal),
    underwear_color(_underwear_color),
    darkest_secret(_darkest_secret) {};


    void
    askForInfos();

    void
    toString();
};

#endif