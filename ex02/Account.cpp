/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwuille <jwuille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 21:18:07 by jwuille           #+#    #+#             */
/*   Updated: 2025/09/14 17:39:18 by jwuille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
	this->_accountIndex = getNbAccounts();
	Account::_nbAccounts++;

	Account::_displayTimestamp();
	std::cout << ""
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created"
		<< "\n";
	return ;
}

Account::Account( int deposit )
{
	this->_amount = deposit;
	Account::_totalAmount += deposit;
	this->_accountIndex = getNbAccounts();
	Account::_nbAccounts++;

	Account::_displayTimestamp();
	std::cout << ""
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created"
		<< "\n";
	return ;
}

Account::~Account( void)
{
	Account::_nbAccounts--;

	Account::_displayTimestamp();
	std::cout << ""
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed"
		<< "\n";
	return ;
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
	return ;
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
	return ;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = checkAmount();

	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << checkAmount() << ";"
		<< "nbDeposits:" << this->_nbDeposits
		<< '\n';
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = checkAmount();

	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "withdrawal:";
	if (p_amount < withdrawal)
	{
		std::cout << "refused\n";
		return (false);
	}

	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;

	std::cout
		<< withdrawal << ";"
		<< "amount:" << checkAmount() << ";"
		<< "nbWithdrawals:" << this->_nbWithdrawals
		<< '\n';
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << checkAmount() << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals
		<< '\n';
	return ;
}
