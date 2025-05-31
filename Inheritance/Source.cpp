#include <iostream>
#include "Header.h"

std::ostream& operator<<(std::ostream& os, const Account& obj) {
	os << "Account of " << obj.AccountName << " has balance: Rs." << obj.balance;
	return os;
}

Account::Account(std::string name, int bal) : AccountName(name), balance(bal) {}

void Account::withdraw(int amount) {
	if (balance <= amount) {
		std::cout << "You cannot withdraw said amount" << std::endl;
		return;
	}
	balance -= amount;
	std::cout << "Rs. " << amount << " withdrawn" << std::endl;
}

void Account::deposit(int amount) {
	balance += amount;
	std::cout << "Rs. " << amount << " deposited" << std::endl;
}

int Account::get_balance() const {
	return this->balance;
}

Account::~Account() {}

Checking_Account::Checking_Account(std::string name, int balance) : Account(name, balance) {}

void Checking_Account::withdraw(int amount) {
	amount -= fee;
	Account::withdraw(amount);
}

Savings_Account::Savings_Account() : Account(), interest_rate(0.0) {}

Savings_Account::Savings_Account(std::string name, int balance, double int_rate) : Account(name, balance), interest_rate(int_rate) {}

void Savings_Account::deposit(int amount) {
	amount += amount * interest_rate;
	Account::deposit(amount);
}

Savings_Account::~Savings_Account() {}

Trust_Account::Trust_Account(std::string name, int balance, double int_rate) : Savings_Account(name, balance, int_rate), totalWithdrawal(0) {}

void Trust_Account::deposit(int amount) {
	if (amount >= 5000) {
		amount += bonusDeposit;
	}
	Savings_Account::deposit(amount);
}

void Trust_Account::withdraw(int amount) {
	if (totalWithdrawal <= 3 && amount * 0.2 < balance) {
		totalWithdrawal++;
		Account::withdraw(amount);
	}
	else {
		std::cout << "You cannot withdraw any more" << std::endl;
	}
}