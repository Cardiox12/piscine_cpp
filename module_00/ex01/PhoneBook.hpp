/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 03:09:57 by bbellavi          #+#    #+#             */
/*   Updated: 2020/10/30 03:16:03 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONE_BOOK_HPP
# define _PHONE_BOOK_HPP

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
    
    Contact contacts[MAX_CONTACT];
    int _index;
};

#endif