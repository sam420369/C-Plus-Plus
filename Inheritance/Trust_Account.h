#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include <iostream>
#include "Savings_Account.h"

class Trust_Account final : public Savings_Account {
private:
	static const int bonusDeposit = 50;
	int totalWithdrawal;																	

public:
	Trust_Account(std::string name, double balance, double int_rate);

	virtual void deposit(double amount) override;
	 					 
	virtual void withdraw(double amount) override;

	virtual void print(std::ostream& os) override;

	virtual ~Trust_Account() = default;
};

#endif // !_TRUST_ACCOUNT_H_
