//
// Created by kyoto on 09/03/2021.
//

#ifndef MAIN_PLASMARIFLE_HPP
#define MAIN_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
    PlasmaRifle();
    PlasmaRifle(const AWeapon &other);
    virtual ~PlasmaRifle();
    PlasmaRifle     &operator=(const PlasmaRifle &other);

    void    attack() const override;
};


#endif //MAIN_PLASMARIFLE_HPP
