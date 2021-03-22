//
// Created by tony on 22/03/2021.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include <string>
#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure() : AMateria("cure") {};
    Cure(const Cure &other) : AMateria(other) {};
    Cure &operator=(const Cure &other);
    virtual ~Cure();

    AMateria * clone() const override;
    void use(ICharacter &target) override;
};


#endif //EX03_CURE_HPP
