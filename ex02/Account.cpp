/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwuille <jwuille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 21:18:07 by jwuille           #+#    #+#             */
/*   Updated: 2025/11/09 16:55:34 by jwuille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account( void )
{
	_accountIndex = getNbAccounts();
	Account::_nbAccounts++;

	Account::_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created"
		<< "\n";
}

Account::Account( int deposit )
{
	_amount = deposit;
	Account::_totalAmount += deposit;
	_accountIndex = getNbAccounts();
	Account::_nbAccounts++;

	Account::_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created"
		<< "\n";
}

Account::~Account( void)
{
	Account::_nbAccounts--;

	Account::_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed"
		<< "\n";
}

int	Account::getNbAccounts( void )
{
	return(Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp()
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout << "["
		<< (now->tm_year + 1900);
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_mon + 1);
	std::cout << std::setfill('0') << std::setw(2) << now->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << now->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_sec;
	std::cout << "] ";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals()
		<< '\n';
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = checkAmount();

	_amount += deposit;
	Account::_totalAmount += deposit;
	_nbDeposits++;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << checkAmount() << ";"
		<< "nb_deposits:" << _nbDeposits
		<< '\n';
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = checkAmount();

	Account::_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "withdrawal:";
	if (p_amount < withdrawal)
	{
		std::cout << "refused\n";
		return (false);
	}

	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;

	std::cout
		<< withdrawal << ";"
		<< "amount:" << checkAmount() << ";"
		<< "nb_withdrawals:" << _nbWithdrawals
		<< '\n';
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "amount:" << checkAmount() << ";"
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals
		<< '\n';
}
