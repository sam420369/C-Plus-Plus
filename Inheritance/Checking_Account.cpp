#include <iostream>
#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance) : Account(name, balance) {}

void Checking_Account::withdraw(double amount) {
	amount += fee;
	Account::withdraw(amount);
}

void Checking_Account::deposit(double amount) {
	Account::deposit(amount);
}

void Checking_Account::print(std::ostream& os) {
	os << this->AccountName << "'s balance: Rs." << this->balance;
}