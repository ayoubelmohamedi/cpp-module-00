
#include "Account.hpp"
#include <string>
#include <iomanip>
#include <iostream>

Account::Account(int initial_deposit)
{
    this->_amount += initial_deposit;    
    this->_nbDeposits += 1;


    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
    std::cout << "created"; 

}

Account::~Account(void)
{

}

void    Account::makeDeposit( int deposit )
{
    this->_amount += deposit;
    this->_nbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{

}

// display timeslaps

void Account::_displayTimestamp(void)
{
    time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

// static getters 

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    
}

