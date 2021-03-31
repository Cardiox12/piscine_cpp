//
// Created by kyoto on 31/03/2021.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :
m_inventory{ nullptr, nullptr, nullptr, nullptr }, m_cursor{ 0 } { }

MateriaSource::MateriaSource(MateriaSource &other) {
    m_cursor = other.m_cursor;
    setInventory( other.m_inventory );
}

MateriaSource &MateriaSource::operator=(MateriaSource &other) {
    m_cursor = other.m_cursor;
    setInventory( other.m_inventory );
    return *this;
}

MateriaSource::~MateriaSource() {
    for ( int i = 0 ; i < INVENTORY_SIZE ; i++ ){
        delete m_inventory[i];
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for ( int i = 0 ; i < m_cursor ; i++ ){
        if ( m_inventory[ i ]->getType() == type ){
            return m_inventory[ i ]->clone();
        }
    }
    return nullptr;
}

void MateriaSource::learnMateria(AMateria *materia) {
    if ( m_cursor < INVENTORY_SIZE ){
        m_inventory[ m_cursor++ ] = materia;
    }
}

void MateriaSource::setInventory(AMateria **inventory) {
    for ( int i = 0 ; i < INVENTORY_SIZE ; i++ ){
        delete m_inventory[ i ];
    }
    for ( int i = 0 ; i < INVENTORY_SIZE ; i++ ){
        m_inventory[ i ] = ( inventory[i] ) ? inventory[i]->clone() : nullptr;
    }
}
