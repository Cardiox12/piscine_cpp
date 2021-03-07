//
// Created by kyoto on 07/03/2021.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP

#include <iostream>
#include <string>

class Sorcerer {
    std::string m_name;
    std::string m_title;
public:
    virtual ~Sorcerer();
    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer &other);
    Sorcerer    &operator=(const Sorcerer &other);

    const std::string &getName() const;
    void setName(const std::string &name);
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
};

std::ostream    &operator<<(std::ostream &os, const Sorcerer &sorcerer);


#endif //EX00_SORCERER_HPP
