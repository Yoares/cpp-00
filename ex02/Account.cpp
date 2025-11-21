/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:13:05 by ykhoussi          #+#    #+#             */
/*   Updated: 2025/11/21 21:05:45 by ykhoussi         ###   ########.fr       */
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

void Account::_displayTimestamp() {
    // Format: [YYYYMMDD_HHMMSS]
    // Use std::time, std::localtime, std::strftime
    // Output to std::cout
    std::time_t now = std::time(NULL);
    std::tm *ptr = std::localtime(&now);

    std::cout << "[";
    std:: cout << ptr->tm_hour;
    std:: cout << ptr->tm_min
    
}