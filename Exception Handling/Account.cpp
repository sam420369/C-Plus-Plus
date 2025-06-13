#include <iostream>
#include "Account.h"

Account::Account(std::string name, double bal) : AccountName(name), balance(bal) {}

void Account::withdraw(double amount) {
	if (amount > balance) {
		throw InsufficientFundsException();
	}
	if (amount < 0) {
		throw IllegalAmountException();
	}
	balance -= amount;
}

void Account::deposit(double amount) {
	if (amount < 0) {
		throw IllegalAmountException();
	}
	balance += amount;
}