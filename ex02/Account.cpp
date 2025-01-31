
#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//[19920104_091532] index:7;amount:16576;created
Account::Account(int initial_deposit)
{
    this->_nbWithdrawals = 0;
    this->_nbDeposits = 0;
    this->_amount = initial_deposit; 
    this->_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++; 

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
    std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout <<  "amount:" << this->checkAmount() << ";";
	std::cout << "closed" << std::endl;
}

//[19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
void    Account::makeDeposit( int deposit )
{
    if (deposit <= 0)
        return ;
    _displayTimestamp();
    std::cout <<  "index:" << this->_accountIndex << ";" <<
	"p_amount:" << this->checkAmount() << ";" <<
	"deposit:" << deposit << ";";
    this->_amount += deposit;
    this->_nbDeposits += 1;
    this->_totalNbDeposits += 1;
    this->_totalAmount += deposit;
    std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

//[19920104_091532] index:0;p_amount:47;withdrawal:refused
bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"p_amount:" << this->checkAmount() << ";";
    if (withdrawal > this->checkAmount())
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (false); 
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    this->_totalAmount -= withdrawal;
    this->_totalNbWithdrawals += 1;
    std::cout << "withdrawal:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}
//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
    std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
}

// display timeslaps
void Account::_displayTimestamp(void)
{
    time_t	now;
    std::tm tm;
    char buffer[80];

	now = time(NULL);
    tm = *std::localtime(&now);
    std::cout << std::strftime(buffer, sizeof(buffer),"[%Y%m%d_%H%M%S] ",&tm);
    std::cout << buffer;
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
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void Account::displayAccountsInfos(void)
{
     _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

