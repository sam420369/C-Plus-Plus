#include <iostream>
#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate) : Savings_Account(name, balance, int_rate), totalWithdrawal(0) {}

void Trust_Account::deposit(double amount) {
	if (amount >= 5000) {
		amount += bonusDeposit;
	}
	Savings_Account::deposit(amount);
}

void Trust_Account::withdraw(double amount) {
	if (totalWithdrawal <= 3 && amount * 0.2 < balance) {
		totalWithdrawal++;
		Account::withdraw(amount);
	}
	else {
		std::cout << "You cannot withdraw any more" << std::endl;
	}
}

void Trust_Account::print(std::ostream& os) {
	os << this->AccountName << "'s balance: Rs." << this->balance;
}