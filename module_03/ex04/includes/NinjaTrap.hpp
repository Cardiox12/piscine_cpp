/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 04:17:50 by bbellavi          #+#    #+#             */
/*   Updated: 2021/03/07 05:07:55 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_H
#define NINJA_TRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap &other) : ClapTrap(other) {};
    virtual ~NinjaTrap();

    void ninjaShoebox(ClapTrap &enemy);
    void ninjaShoebox(ScavTrap &enemy);
    void ninjaShoebox(FragTrap &enemy);
};


#endif //EX03_NINJATRAP_H
