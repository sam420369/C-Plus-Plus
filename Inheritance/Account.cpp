#include <iostream>
#include "Account.h"

Account::Account(std::string name, double bal) : AccountName(name), balance(bal) {}

void Account::withdraw(double amount) {
	if (balance < amount) {
		std::cout << "You cannot withdraw said amount" << std::endl;
		return;
	}
	balance -= amount;
	std::cout << "Rs. " << amount << " withdrawn" << std::endl;
}

void Account::deposit(double amount) {
	balance += amount;
	std::cout << "Rs. " << amount << " deposited" << std::endl;
}