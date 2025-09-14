/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwuille <jwuille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 21:18:07 by jwuille           #+#    #+#             */
/*   Updated: 2025/09/14 17:06:24 by jwuille          ###   ########.fr       */
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
		<< "withdrawals:" << getNbWithdrawals() << ";"
		<< '\n';
	return ;
}

void	Account::makeDeposit( int deposit )
{
	(void)deposit;
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created"
		<< '\n';
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals" << this->_nbWithdrawals << ";"
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
		<< "displayStatus"
		<< '\n';
	return ;
}
