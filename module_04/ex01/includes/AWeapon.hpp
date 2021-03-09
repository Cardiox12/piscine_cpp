//
// Created by kyoto on 09/03/2021.
//

#ifndef MAIN_AWEAPON_HPP
#define MAIN_AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon {
    std::string m_name;
    int         m_damage;
    int         m_cost;
public:
    AWeapon();
    AWeapon(const std::string &name, int cost, int damage);
    AWeapon(const AWeapon &other);
    virtual             ~AWeapon();
    AWeapon             &operator=(const AWeapon &other);

    virtual void        attack() const = 0;

    const std::string   &getName() const;
    void                setName(const std::string &mName);
    int                 getDamage() const;
    void                setDamage(int mDamage);
    int                 getCost() const;
    void                setCost(int mCost);
};


#endif //MAIN_AWEAPON_HPP
