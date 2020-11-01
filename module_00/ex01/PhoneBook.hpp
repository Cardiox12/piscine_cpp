/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 03:09:57 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/01 02:29:46 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONE_BOOK_HPP
# define _PHONE_BOOK_HPP

# include <array>
# include <iomanip>
# include "Contact.hpp"

# define MAX_CONTACT 8
# define MAX_FIELD_SIZE 10
# define NB_COLUMNS 4
# define COL_SEP '|'

# define _Contact_to_array(index, contact) (    \
    std::array<std::string, 4>{                 \
        index,                                  \
        contact.first_name,                     \
        contact.last_name,                      \
        contact.nickname                        \
    }                                           \
)

class PhoneBook
{
    public:

    PhoneBook() : _index(0) {};
    
    void
    addContact(Contact contact);

    void
    search();

    void
    searchContact(int index);

    private:
    std::array<std::string, NB_COLUMNS> _header = {
        "Index", "Name", "Last Name", "Pseudo"
    };
    std::array<Contact, MAX_CONTACT> contacts;
    
    int _index;
    
    void
    writeColumns(std::array<std::string, NB_COLUMNS> columns){
        for (int index = 0 ; index < NB_COLUMNS ; index++) {
            std::string column = columns[index];

            if (column.size() > MAX_FIELD_SIZE) {
                column = column.substr(0, MAX_FIELD_SIZE - 1);
                column.append(".");
            }
            
            std::cout << std::setw(MAX_FIELD_SIZE) << column << '|';
        }

        std::cout << std::endl;
    }
};

#endif