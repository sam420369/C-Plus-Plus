#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include <iostream>
#include "Account.h"

class Checking_Account : public Account {
private:
	static constexpr int fee = 2;

public:
	Checking_Account(std::string name, double balance);

	virtual void withdraw(double amount) override;
	
	virtual void deposit(double amount) override;

	virtual void print(std::ostream& os) override;

	virtual ~Checking_Account() = default;
};

#endif // !_CHECKING_ACCOUNT_H_
