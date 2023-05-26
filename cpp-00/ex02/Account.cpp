/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:03:14 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/19 14:05:10 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;

int	Account::getNbAccounts( void ){
    return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
    return (_totalAmount);
}

int	Account::getNbDeposits( void ){
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void ){
    time_t    rawtime;
    struct    tm * timeinfo;
    char    buff[20];


    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime (buff, 20, "%Y%m%d_%H%M%S", timeinfo);
    std::cout << "[" << buff << "] ";
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::~Account() {
    Account::_displayTimestamp();
    std::cout << "index:" <<     _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

 Account::Account(int initial_deposit){
    _amount = initial_deposit;
    _totalAmount += _amount;
    _accountIndex = _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
 }

void	Account::displayAccountsInfos( void ){
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
    if (deposit > 0)
    {
        _totalAmount+=deposit;
        _amount += deposit;
        _totalNbDeposits++;
        _nbDeposits++;
        Account::_displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    }
}

bool	Account::makeWithdrawal( int withdrawal ){
    Account::_displayTimestamp();
    if (withdrawal < _amount)
    {
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    else
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    return (true);
}
