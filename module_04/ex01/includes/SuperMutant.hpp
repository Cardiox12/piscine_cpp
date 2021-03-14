//
// Created by tony on 14/03/2021.
//

#ifndef EX01_SUPER_MUTANT_HPP
#define EX01_SUPER_MUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
    SuperMutant();
    SuperMutant(const SuperMutant &other);
    SuperMutant &operator=(const SuperMutant &other);
    virtual ~SuperMutant();

    void takeDamage(int amount) override;
};


#endif //EX01_SUPER_MUTANT_HPP
