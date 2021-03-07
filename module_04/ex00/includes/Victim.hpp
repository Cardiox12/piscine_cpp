//
// Created by kyoto on 07/03/2021.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <string>
#include <iostream>

class Victim {
    std::string m_name;
public:
    Victim(std::string name);
    Victim(const Victim &other);
    Victim  &operator=(const Victim &other);
    virtual ~Victim();

    virtual void    getPolymorphed() const;

//    Getters and Setters
    const std::string &getName() const;
    void setName(const std::string &name);
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif //EX00_VICTIM_HPP
