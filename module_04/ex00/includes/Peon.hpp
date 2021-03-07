//
// Created by kyoto on 07/03/2021.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
public:
    virtual ~Peon();
    Peon(std::string name);
    Peon(const Peon &other);
    Peon    &operator=(const Peon &other);

    void getPolymorphed() const override;
};

#endif //EX00_PEON_HPP
