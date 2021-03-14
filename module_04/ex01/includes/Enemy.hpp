//
// Created by tony on 14/03/2021.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <iostream>
#include <string>

class Enemy {
    int         m_hp;
    std::string m_type;
public:
    Enemy(int hp, const std::string &type);
    Enemy(const Enemy &other);
    virtual     ~Enemy();
    Enemy       &operator=(const Enemy &other);

    std::string const &getType() const;
    int         getHP() const;
    void        setType(const std::string &type);
    void        setHP(int hp);

    virtual void takeDamage(int amount);
};


#endif //EX01_ENEMY_HPP
