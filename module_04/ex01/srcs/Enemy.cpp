//
// Created by tony on 14/03/2021.
//

#include "../includes/Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : m_hp{ hp }, m_type{ type } {}

Enemy::~Enemy() {}

std::string const &Enemy::getType() const { return m_type; }

int Enemy::getHP() const { return m_hp; }

void Enemy::takeDamage(int damage) {
    if ( damage > 0 && m_hp > 0 ){
        int delta = m_hp - damage;

        m_hp = ( delta > 0 ) ? delta : 0;
    }
}

Enemy::Enemy(const Enemy &other) {
    m_type = other.getType();
    m_hp = other.getHP();
}

Enemy &Enemy::operator=(const Enemy &other) {
    m_hp = other.getHP();
    m_type = other.getType();

    return *this;
}

void Enemy::setType(const std::string &type) {
    m_type = type;
}

void Enemy::setHP(int hp) {
    if ( hp >= 0 ){
        m_hp = hp;
    }
}
