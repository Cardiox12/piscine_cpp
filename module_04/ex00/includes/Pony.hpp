//
// Created by kyoto on 08/03/2021.
//

#ifndef EX00_PONY_HPP
#define EX00_PONY_HPP

#include "Victim.hpp"

class Pony : public Victim {
public:
    virtual ~Pony();
    Pony(std::string name);
    Pony(const Pony &other);
    Pony    &operator=(const Pony &other);

    void getPolymorphed() const override;
};


#endif //EX00_PONY_HPP
