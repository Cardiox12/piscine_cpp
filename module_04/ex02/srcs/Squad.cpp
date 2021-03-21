//
// Created by tony on 18/03/2021.
//

#include <iostream>
#include "../includes/Squad.hpp"

Squad::Squad() : m_units{ 0 }, m_squad{ nullptr } {}

Squad::Squad(const Squad &other) {
    for ( int i = 0 ; i < other.getCount() ; i++ ){
        ISpaceMarine *marine = other.getUnit( i );

        push( marine->clone() );
    }
}

Squad &Squad::operator=(const Squad &other) {
//    Destroy own squad and deep copy

    if ( m_units == 1 ){
        delete m_squad;
    } else {
        Unit *unit = m_squad;
        Unit *tmp;

        while ( unit != nullptr ){
            tmp = unit->m_next;
            delete unit->m_marine;
            delete unit;
            unit = tmp;
        }
    }

    for ( int i = 0 ; i < other.getCount() ; i++ ){
        ISpaceMarine *marine = other.getUnit( i );

        push( marine->clone() );
    }

    return *this;
}

Squad::~Squad() {}

int Squad::getCount() const {
    return m_units;
}

ISpaceMarine *Squad::getUnit(int index) const {
    if ( index < 0 || index >= m_units ){
        return nullptr;
    }
    Unit *unit = m_squad;

    while (index--){
        unit = unit->m_next;
    }
    return unit->m_marine;
}

int Squad::push(ISpaceMarine *marine) {
    if ( marine == nullptr ){
        return m_units;
    }
    Unit *unit = new Unit{ marine, nullptr };

    if ( m_units == 0 ){
        m_squad = unit;
    } else {
        Unit *back;

        for ( back = m_squad ; back->m_next != nullptr ; back = back->m_next );

        back->m_next = unit;
    }

    return ++m_units;
}