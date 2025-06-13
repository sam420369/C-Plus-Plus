#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include "InsufficientFundsException.h"
#include "IllegalAmountException.h"

class Account {
private:
	static constexpr const char* defaultName = "Unnamed Accound";
	static constexpr const double defaultBalance = 0.0;

protected:
	std::string AccountName;
	double balance;

public:
	Account(std::string name = defaultName, double bal = defaultBalance);

	void deposit(double amount);

	void withdraw(double amount);

	virtual ~Account() = default;
};


#endif // !_ACCOUNT_H_