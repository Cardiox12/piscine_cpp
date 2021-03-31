//
// Created by kyoto on 31/03/2021.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define INVENTORY_SIZE 4

class MateriaSource : public IMateriaSource {
    AMateria    *m_inventory[INVENTORY_SIZE];
    int         m_cursor;

    void setInventory(AMateria **inventory);
public:
    MateriaSource();
    MateriaSource(MateriaSource &other);
    MateriaSource &operator=(MateriaSource &other);
    virtual ~MateriaSource();

    AMateria * createMateria(const std::string &type) override;
    void learnMateria(AMateria *materia) override;
};


#endif //EX03_MATERIASOURCE_HPP
