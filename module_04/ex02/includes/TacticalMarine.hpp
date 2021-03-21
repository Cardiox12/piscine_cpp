//
// Created by kyoto on 21/03/2021.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP

#include "../includes/ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
    TacticalMarine();
    TacticalMarine(const TacticalMarine &other);
    virtual ~TacticalMarine();
    void battleCry() const override;
    ISpaceMarine * clone() const override;
    void meleeAttack() const override;
    void rangedAttack() const override;
};


#endif //EX02_TACTICALMARINE_HPP
