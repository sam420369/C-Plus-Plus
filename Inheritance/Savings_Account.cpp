#include <iostream>
#include "Savings_Account.h"

Savings_Account::Savings_Account() : Account(), interest_rate(0.0) {}

Savings_Account::Savings_Account(std::string name, double balance, double int_rate) : Account(name, balance), interest_rate(int_rate) {}

void Savings_Account::print(std::ostream& os) {
	os << this->AccountName << "'s balance: Rs." << this->balance;
}

void Savings_Account::deposit(double amount) {
	amount += amount * (interest_rate);
	Account::deposit(amount);
}

void Savings_Account::withdraw(double amount) {
	Account::withdraw(amount);
}