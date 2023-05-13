/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:17:32 by ergrigor          #+#    #+#             */
/*   Updated: 2023/05/13 17:31:29 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <sys/time.h>
#include <iostream>
#include <iomanip>
#include <sstream>

int	Account::_nbAccounts = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalAmount = 0;


void Account::_displayTimestamp()
{
    struct timeval t;
    gettimeofday(&t, NULL);
    time_t timestamp = t.tv_sec;
    struct tm* timeinfo = localtime(&timestamp);
    std::ostringstream oss;
    oss << "[" << std::setfill('0') << std::setw(4) << (timeinfo->tm_year + 1900);
    oss << std::setfill('0') << std::setw(2) << (timeinfo->tm_mon + 1);
    oss << std::setfill('0') << std::setw(2) << timeinfo->tm_mday;
    oss << "_";
    oss << std::setfill('0') << std::setw(2) << timeinfo->tm_hour;
    oss << std::setfill('0') << std::setw(2) << timeinfo->tm_min;
    oss << std::setfill('0') << std::setw(2) << timeinfo->tm_sec;
    oss << "] ";
    std::cout << oss.str();
}

int	Account::getNbAccounts( void ){return (_nbAccounts);}

int	Account::getTotalAmount( void ){return (_totalAmount);}

int	Account::getNbDeposits( void ){return (_totalNbDeposits);}

int	Account::getNbWithdrawals( void ){return (_totalNbWithdrawals);}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts()\
    << ";total:" << Account::getTotalAmount()\
    << ";deposits:" << Account::getNbDeposits()\
    << ";withdrawals:" << Account::getNbWithdrawals() << "\n";  
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:"<< _accountIndex\
    << ";amount:" << _amount\
    << ";deposits:" << _nbDeposits\
    << ";withdrawals:" << _nbWithdrawals << "\n";
}

Account::Account( int initial_deposit )
{
    Account::_displayTimestamp();
    _accountIndex = _nbAccounts;
    _nbAccounts += 1;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created\n";
    
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex\
    << ";amount:" << _amount << ";closed\n";
    
}


void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if ((_amount - withdrawal) >= 0)
    {
        std::cout << ";withdrawal:" << withdrawal;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals += 1;
        _totalNbWithdrawals += 1;
        std::cout << ";amount:" << _amount;
        std::cout << ";nb_withdrawals:" << _nbDeposits << "\n";
    }
    else
    {
         std::cout << ";withdrawal:refused\n";
         return false;
    }
    return true;
}

int		Account::checkAmount( void ) const{return _amount;}

