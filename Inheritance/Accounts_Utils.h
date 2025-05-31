#ifndef _ACCOUNT_UTILS_H_
#define _ACCOUNT_UTILS_H_

#include <iostream>
#include <vector>
#include "Header.h"

void display(const std::vector<Account> Accounts);
void deposit(std::vector<Account>& Accounts, int amount);
void withdraw(std::vector<Account>& Accounts, int amount);

void display(const std::vector<Savings_Account> Accounts);
void deposit(std::vector<Savings_Account>& Accounts, int amount);
void withdraw(std::vector<Savings_Account>& Accounts, int amount);

#endif // !_ACCOUNT_UTILS_H_
	