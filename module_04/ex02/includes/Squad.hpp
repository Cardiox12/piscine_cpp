//
// Created by tony on 18/03/2021.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

#include "ISquad.hpp"

struct Unit {
    ISpaceMarine    *m_marine;
    Unit            *m_next;
    Unit    &operator=(const Unit *other);
};

class Squad : public ISquad {
    int     m_units;
    Unit    *m_squad;
public:
    Squad();
    Squad(const Squad &other);
    Squad &operator=(const Squad &other);
    virtual ~Squad();

    int getCount() const override;
    ISpaceMarine * getUnit(int index) const override;
    int push(ISpaceMarine *marine) override;
};


#endif //EX02_SQUAD_HPP
