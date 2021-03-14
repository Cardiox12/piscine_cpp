//
// Created by tony on 14/03/2021.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"
#include "AWeapon.hpp"

#define MAX_AP 40

class Character {
    std::string m_name;
    int         m_ap;
    AWeapon     *m_weapon;

public:
    Character(const std::string &name);
    Character(const Character &other);
    ~Character();
    Character &operator=(const Character &other);


    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);

    std::string const &getName() const;
    int getAP() const;
    AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &os, Character &character);


#endif //EX01_CHARACTER_HPP
