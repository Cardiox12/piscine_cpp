//
// Created by tony on 14/03/2021.
//

#include "../includes/Character.hpp"

Character::Character(const std::string &name) {
    m_name = name;
    m_ap = 40;
    m_weapon = nullptr;
}

Character::Character(const Character &other) {
    m_name = other.m_name;
    m_ap = other.m_ap;
    m_weapon = other.m_weapon;
}

Character::~Character() {

}

Character &Character::operator=(const Character &other) {
    m_name = other.m_name;
    m_ap = other.m_ap;
    m_weapon = other.m_weapon;

    return *this;
}

void Character::recoverAP() {
    int total = m_ap + 10;

    m_ap = ( total > MAX_AP ) ? MAX_AP : total;
}

void Character::equip(AWeapon *weapon) {
    m_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
    if ( enemy != nullptr && m_weapon != nullptr && m_ap > 0 ){
        std::cout << m_name << " attacks " << enemy->getType() << " with a " << m_weapon->getName() << std::endl;
        m_weapon->attack();
        enemy->takeDamage( m_weapon->getDamage() );

        m_ap -= m_weapon->getCost();
        if ( m_ap < 0 )
            m_ap = 0;

        if ( enemy->getHP() == 0 ){
            delete enemy;
        }
    }
}

std::string const &Character::getName() const {
    return m_name;
}

int Character::getAP() const {
    return m_ap;
}

AWeapon *Character::getWeapon() const {
    return m_weapon;
}

std::ostream &operator<<(std::ostream &os, Character &character) {
    os << character.getName() << " has " << character.getAP() << " AP and ";

    if ( character.getWeapon() == nullptr ){
        os << "is unarmed" << std::endl;
    } else {
        os << "wields a " << character.getWeapon()->getName() << std::endl;
    }

    return os;
}
