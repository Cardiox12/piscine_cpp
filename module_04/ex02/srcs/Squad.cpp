//
// Created by tony on 18/03/2021.
//

#include "../includes/Squad.hpp"

Squad::Squad() : m_units{ 0 }, m_squad{ nullptr } {}

Squad::Squad(const Squad &other) {

}

Squad &Squad::operator=(const Squad &other) {
    return *this;
}

Squad::~Squad() {

}

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
    if ( marine != nullptr ){
        return m_units;
    }
    Unit *unit = new Unit{ marine, nullptr };

    if ( m_units == 0 ){
        m_squad = unit;
    } else {
        Unit *back = m_squad;
        for ( back = m_squad ; back->m_next != nullptr ; back = back->m_next );
        back->m_next = unit;
    }

    return ++m_units;
}

Unit &Unit::operator=(const Unit *other) {
    `
    return *this;
}
