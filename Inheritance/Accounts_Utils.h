#ifndef _ACCOUNT_UTILS_H_
#define _ACCOUNT_UTILS_H_

#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

void display(const std::vector<Account*> Accounts);
void deposit(std::vector<Account*>& Accounts, double amount);
void withdraw(std::vector<Account*>& Accounts, double amount);
#endif // !_ACCOUNT_UTILS_H_
	