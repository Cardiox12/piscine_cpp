//
// Created by tony on 14/03/2021.
//

#include "../includes/Enemy.hpp"

Enemy::Enemy(int hp, std::string &type) : m_hp{ hp }, m_type{ type } {}

Enemy::~Enemy() {}

std::string const &Enemy::getType() const { return m_type; }

int Enemy::getHP() const { return m_hp; }

void Enemy::takeDamage(int damage) {
    if ( damage > 0 ){
        int delta = m_hp - damage;

        m_hp = ( delta > 0 ) ? delta : 0;
    }
}
