#include <iostream>
#include <vector>
#include "Account.h"
#include "Accounts_Utils.h"

void display(std::vector<Account*> Accounts) {
	std::cout << "------Accounts------" << std::endl;
	for (auto acc : Accounts) {
		std::cout << *acc << std::endl;
	}
}

void deposit(std::vector<Account*>& Accounts, double amount) {
	for (auto& acc : Accounts) {
		acc->deposit(amount);
	}
}

void withdraw(std::vector<Account*>& Accounts, double amount) {
	for (auto& acc : Accounts) {
		acc->withdraw(amount);
	}
}