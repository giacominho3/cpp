#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;

int	Account::_totalNbWithdrawals = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalAmount = 0;

int	counter = 0;

Account::Account(int initial_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
}

int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getTotalNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getTotalNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}


//start of printing and modding funcions
void Account::_displayTimestamp()
{
	std::time_t result = std::time(NULL);

	std::cout << "[" << std::localtime(&result)->tm_year
	<< std::localtime(&result)->tm_mon
	<< std::localtime(&result)->tm_mday
	<< "_"
	<< std::localtime(&result)->tm_hour
	<< std::localtime(&result)->tm_min
	<< std::localtime(&result)->tm_sec 
	<< "] " << std::flush;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout <<
	"accounts:" << getNbAccounts() <<
	";amount:" << getTotalAmount() << 
	";deposits:" << getTotalNbDeposits() << 
	";withdrawals:" << getTotalNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex <<
	";p_amount:" << this->_amount <<
	";deposit:" << deposit;

	this->_amount += deposit;

	std::cout <<
	";amount:" << this->_amount <<
	";nb_deposits:" << this->_nbDeposits <<
	std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;

	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex <<
	";p_amount:" << this->_amount <<
	";withdrawal:";

	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}

	std::cout << withdrawal;
	this->_amount -= withdrawal;

	std::cout <<
	";amount:" << this->_amount <<
	";nb_withdrawals:" << this->_nbWithdrawals <<
	std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex <<
	";amount:" << this->_amount <<
	";deposits:" << this->_nbDeposits <<
	";withdrawals:" << this->_nbWithdrawals <<
	std::endl;
}