#include <iostream>
#include <vector>
#include "Accounts_Utils.h"
#include "Header.h"

void display(const std::vector<Account> Accounts) {
	std::cout << "---------Account---------" << std::endl;
	for (auto& Acc : Accounts) {
		std::cout << Acc << std::endl;
	}
}

void display(const std::vector<Savings_Account> Accounts) {
	std::cout << "---------Saving Account---------" << std::endl;
	for ( auto& Acc : Accounts) {
		std::cout << Acc << std::endl;
	}
}

void deposit(std::vector<Account>& Accounts, int amount) {
	for (auto& Acc : Accounts) {
		Acc.deposit(amount);
	}
}

void deposit(std::vector<Savings_Account>& Accounts, int amount) {
	for (auto& Acc : Accounts) {
		Acc.deposit(amount);
	}
}

void withdraw(std::vector<Account>& Accounts, int amount) {
	for (auto& Acc : Accounts) {
		Acc.withdraw(amount);
	}
}

void withdraw(std::vector<Savings_Account>& Accounts, int amount) {
	for (auto& Acc : Accounts) {
		Acc.withdraw(amount);
	}
}