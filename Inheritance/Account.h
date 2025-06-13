#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include "I_Printable.h"

class Account : public I_Printable {
private:
	static constexpr const char* defaultName = "Unnamed Accound";
	static constexpr const double defaultBalance = 0.0;

protected:
	std::string AccountName;
	double balance;

public:
	Account(std::string name = defaultName, double bal = defaultBalance);

	virtual void deposit(double amount) = 0;

	virtual void withdraw(double amount) = 0;

	virtual ~Account() = default;
};


#endif // !_ACCOUNT_H_
