//
// Created by kyoto on 09/03/2021.
//

#ifndef MAIN_POWERFIST_HPP
#define MAIN_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
    PowerFist();
    PowerFist(const AWeapon &other);
    virtual     ~PowerFist();
    PowerFist   &operator=(const PowerFist &other);

    void        attack() const override;
};


#endif //MAIN_POWERFIST_HPP
