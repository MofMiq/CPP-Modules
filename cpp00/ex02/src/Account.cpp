/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:23:23 by marirodr          #+#    #+#             */
/*   Updated: 2024/04/26 16:10:25 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

#define PURPLE "\033[35m"
#define END "\033[0m"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_displayTimestamp();
	std::cout << "index:" << PURPLE << this->_accountIndex << END << ";amount:" << PURPLE << this->_amount << END << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << PURPLE << this->_accountIndex << END << ";amount:" << PURPLE << this->_amount << END << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << PURPLE << this->_accountIndex << END << ";p_amount:" << PURPLE << this->_amount << END << ";deposit:" << PURPLE << deposit << END;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << PURPLE << this->_amount << END << ";nb_deposits:" << PURPLE << this->_nbDeposits << END << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << PURPLE << this->_accountIndex << END << ";p_amount:" << PURPLE << this->_amount << END << ";withdrawal:";
	if (this->_amount <= withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << PURPLE << withdrawal << END << ";amount:" << PURPLE << this->_amount << END << ";nb_withdrawals:" << PURPLE << this->_nbWithdrawals << END << std::endl;
	return (true);
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << PURPLE << this->_accountIndex << END << ";amount:" << PURPLE << this->_amount << END << ";deposits:" << PURPLE << this->_nbDeposits << END << ";withdrawals:" << PURPLE << this->_nbWithdrawals << END << std::endl;
}

void Account::_displayTimestamp(void)
{
 	std::time_t time = std::time(NULL);
	std::tm* now	= std::localtime(&time);

	std::cout << std::put_time(now, "[%Y%m%d_%H%M%S] ");
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
  std::cout << "accounts:" << PURPLE << Account::getNbAccounts() << END;
  std::cout << ";total:" << PURPLE << Account::getTotalAmount() << END;
  std::cout << ";deposits:" << PURPLE << Account::getNbDeposits() << END;
  std::cout << ";withdrawals:" << PURPLE << Account::getNbWithdrawals() << END << std::endl;
}
