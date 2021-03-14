//
// Created by tony on 14/03/2021.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <string>

class Enemy {
    int         m_hp;
    std::string m_type;
public:
    Enemy(int hp, std::string &type);
    virtual     ~Enemy();
    std::string const &getType() const;
    int         getHP() const;

    virtual void takeDamage(int amount);
};


#endif //EX01_ENEMY_HPP
