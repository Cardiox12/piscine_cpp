/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 03:09:57 by bbellavi          #+#    #+#             */
/*   Updated: 2020/10/31 23:24:19 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONE_BOOK_HPP
# define _PHONE_BOOK_HPP

# include <array>
# include "Contact.hpp"

# define MAX_CONTACT 8

class PhoneBook
{
    public:

    PhoneBook() : _index(0) {};
    
    void
    addContact(Contact contact);

    void
    showBook();

    void
    searchContact();

    private:
    std::array<Contact, MAX_CONTACT> contacts;
    
    int _index;
};

#endif