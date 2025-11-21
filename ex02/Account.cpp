/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:13:05 by ykhoussi          #+#    #+#             */
/*   Updated: 2025/11/21 22:47:11 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(NULL);        // Get current time in seconds
    std::tm *ptm = std::localtime(&now);      // Convert to readable time struct

    std::cout << '['
              << (ptm->tm_year + 1900)        // year since 1900 → real year
              << std::setfill('0') << std::setw(2) << ptm->tm_mon + 1  
              << std::setw(2) << ptm->tm_mday   // day
              << '_'
              << std::setw(2) << ptm->tm_hour   
              << std::setw(2) << ptm->tm_min   
              << std::setw(2) << ptm->tm_sec   
              << "] ";
}

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;

	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_totalAmount += initial_deposit; // Add to global money

	_displayTimestamp();
	// index:0;amount:42;created
	std::cout << "index:" << this->_accountIndex 
			  << ";amount:" << this->_amount
			  << ";created" << std::endl ;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";closed" << std::endl;
}

int Account::getNbAccounts(void) { return Account::_nbAccounts; }
int Account::getTotalAmount(void) { return Account::_totalAmount; }
int Account::getNbDeposits(void) { return Account::_totalNbDeposits; }
int Account::getNbWithdrawals(void) { return Account::_totalNbWithdrawals; }

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals()
			  << std::endl ;
}
