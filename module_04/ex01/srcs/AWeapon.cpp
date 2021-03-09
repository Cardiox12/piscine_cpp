//
// Created by kyoto on 09/03/2021.
//

#include "../includes/AWeapon.hpp"

AWeapon::AWeapon() {
    m_name = "unknown";
    m_cost = 0;
    m_damage = 0;
}

AWeapon::AWeapon(const std::string &name, int cost, int damage) : m_name( name ), m_cost( cost ), m_damage( damage ) {}

AWeapon::AWeapon(const AWeapon &other) {
    setName(other.getName());
    setCost(other.getCost());
    setDamage(other.getDamage());
}

AWeapon &AWeapon::operator=(const AWeapon &other) {
    setName(other.getName());
    setCost(other.getCost());
    setDamage(other.getDamage());

    return *this;
}

AWeapon::~AWeapon() {}

// Getters and Setters

const std::string &AWeapon::getName() const {
    return m_name;
}

void AWeapon::setName(const std::string &mName) {
    m_name = mName;
}

int AWeapon::getDamage() const {
    return m_damage;
}

void AWeapon::setDamage(int mDamage) {
    m_damage = mDamage;
}

int AWeapon::getCost() const {
    return m_cost;
}

void AWeapon::setCost(int mCost) {
    m_cost = mCost;
}