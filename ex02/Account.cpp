/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwuille <jwuille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 21:18:07 by jwuille           #+#    #+#             */
/*   Updated: 2025/09/14 14:59:22 by jwuille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>     // std::cout
#include <iomanip>      // std::put_time
#include <ctime>        // std::time_t, struct std::tm, std::localtime

Account::Account( void )
{
	return ;
}

Account::Account( int deposit )
{
	makeDeposit(deposit);
	return ;
}

Account::~Account( void)
{
	return ;
}

int	Account::getNbAccounts( void )
{
	int res = 0;
	return(res);
}

int Account::getTotalAmount( void )
{
	int res = 0;
	return(res);
}

int Account::getNbDeposits( void )
{
	int res = 0;
	return(res);
}

int Account::getNbWithdrawals( void )
{
	int res = 0;
	return(res);
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
	std::cout << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	(void)deposit;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	const int	res = 0;
	return (res);
}

void	Account::displayStatus( void ) const
{
	return ;
}
