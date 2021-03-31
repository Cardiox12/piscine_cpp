//
// Created by kyoto on 31/03/2021.
//

#include "Character.hpp"

Character::Character(std::string &name) :
    m_name( name ), m_cursor( 0 ), m_inventory{ nullptr, nullptr, nullptr, nullptr } { }

Character::Character(Character &other) {
    m_name = other.getName();
    setInventory( other.getInventory() );
}

Character &Character::operator=(Character &other) {
    m_name = other.getName();
    setInventory( other.getInventory() );

    return *this;
}

void Character::equip(AMateria *materia) {
    if ( m_cursor < INVENTORY_SIZE ){
        m_inventory[ m_cursor++ ] = materia;
    }
}

const std::string &Character::getName() const {
    return m_name;
}

void Character::unequip(int index) {
    if ( index >= 0 && index < INVENTORY_SIZE ){
        m_inventory[index] = nullptr;
    }
}

void Character::use(int index, ICharacter &target) {
    if ( index >= 0 && index < INVENTORY_SIZE ){
        m_inventory[index]->use( target );
    }
}

AMateria **Character::getInventory() {
    return m_inventory;
}

void Character::setInventory(AMateria **inventory) {
    for ( int i = 0 ; i < INVENTORY_SIZE ; i++ ){
        if ( m_inventory[i] ){
            delete m_inventory[i];
        }
    }
    for ( int i = 0 ; i < INVENTORY_SIZE ; i++ ){
        m_inventory[i] = (inventory[i]) ? inventory[i]->clone() : nullptr;
    }
}

void Character::setName(std::string &name) {
    m_name = name;
}
