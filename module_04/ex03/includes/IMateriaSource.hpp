//
// Created by kyoto on 31/03/2021.
//

#ifndef EX03_IMATERIASOURCE_HPP
#define EX03_IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *materia) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};


#endif //EX03_IMATERIASOURCE_HPP
