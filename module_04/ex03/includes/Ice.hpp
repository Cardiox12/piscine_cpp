//
// Created by kyoto on 22/03/2021.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    Ice(const Ice &other);
    Ice &operator=(const Ice &other);
    virtual ~Ice();

    AMateria * clone() const override;
    void use(ICharacter &target) override;
};


#endif //EX03_ICE_HPP
