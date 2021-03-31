//
// Created by kyoto on 31/03/2021.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define INVENTORY_SIZE 4

class Character : public ICharacter {
    std::string m_name;
    AMateria    *m_inventory[INVENTORY_SIZE];
    int         m_cursor;
public:
    Character(std::string &name);
    Character(Character &other);
    Character &operator=(Character &other);

    void equip(AMateria *materia) override;
    const std::string & getName() const override;
    void unequip(int index) override;
    void use(int index, ICharacter &target) override;

    AMateria **getInventory();
    void setInventory(AMateria **inventory);
};


#endif //EX03_CHARACTER_HPP
