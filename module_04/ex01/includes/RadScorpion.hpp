//
// Created by tony on 14/03/2021.
//

#ifndef EX01_RAD_SCORPION_HPP
#define EX01_RAD_SCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
    RadScorpion();
    RadScorpion(const RadScorpion &other);
    virtual ~RadScorpion();
};


#endif //EX01_RAD_SCORPION_HPP
