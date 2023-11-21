/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:23:23 by marirodr          #+#    #+#             */
/*   Updated: 2023/11/21 16:35:08 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"
#include "Account.hpp"
#include <iostream>

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    Account::displayAccountsInfos();
}

Account::Account(int initial_deposit)
{
}
Account::~Account(void)
{
}

void Account::makeDeposit(int deposit)
{
}
bool Account::makeWithdrawal(int withdrawal)
{
}

int Account::checkAmount(void) const
{
	return (0);
}

void Account::displayStatus(void) const
{
}

void Account::_displayTimestamp(void)
{
}
