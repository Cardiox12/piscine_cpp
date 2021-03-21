//
// Created by kyoto on 21/03/2021.
//

#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator &other);
    virtual ~AssaultTerminator();
    void rangedAttack() const override;
    void meleeAttack() const override;
    ISpaceMarine * clone() const override;
    void battleCry() const override;
};


#endif //EX02_ASSAULTTERMINATOR_HPP
