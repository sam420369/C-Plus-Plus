#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include <iostream>
#include "Account.h"

class Savings_Account : public Account {
protected:
	float interest_rate;
public:
	Savings_Account();

	Savings_Account(std::string name, double balance, double int_rate);

	virtual void deposit(double amount) override;

	virtual void withdraw(double amount) override;

	virtual void print(std::ostream& os) override;

	virtual ~Savings_Account() = default;
};

#endif // !_SAVINGS_ACCOUNT_H_
