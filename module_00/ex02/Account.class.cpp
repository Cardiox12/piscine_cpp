/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:14:29 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/01 15:00:56 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <string>
#include <iostream>
#include "Account.class.hpp"

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;

    
}

~Account::Account()
{
        
}

/* =============================== Static methods =========================== */

int
Account::getNbAccounts()
{
    return (_nbAccounts);
}

int
Account::getTotalAmount()
{
    return (_totalAmount);
}

int
Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int
Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void
Account::displayAccountsInfos()
{
    
}

/* =========================== Non static methods =========================== */

void
Account::makeDeposit(int deposit)
{
    
}

bool
Account::makeWithdrawal(int withdrawal)
{
    
}

int
Account::checkAmount() const
{
    return (_amount);
}

void
Account::displayStatus() const
{
    
}

void
Account::_displayTimestamp()
{
    std::time_t time = std::time(0);
    std::tm     *now = std::localtime(&time);
}