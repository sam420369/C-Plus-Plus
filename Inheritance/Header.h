#ifndef _INHERITANCE_H_
#define _INHERITANCE_H_

#include <iostream>

class Account {
	friend std::ostream& operator<<(std::ostream& os, const Account& obj);

private:
	static constexpr const char* defaultName = "Unnamed Accound";
	static const int defaultBalance = 0;

protected:
	std::string AccountName;
	int balance;

public:
	Account(std::string name = defaultName, int bal = defaultBalance);

	void deposit(int amount);

	void withdraw(int amount);

	int get_balance() const;

	~Account();
};

class Checking_Account : public Account {
private:
	static constexpr int fee = 2;

public:
	Checking_Account(std::string name, int balance);

	void withdraw(int amount);
};

class Savings_Account : public Account {
protected:
	float interest_rate;
public:
	Savings_Account();

	Savings_Account(std::string name, int balance, double int_rate);

	void deposit(int amount);

	~Savings_Account();
};


class Trust_Account : public Savings_Account {
private:
	static const int bonusDeposit = 50;
	int totalWithdrawal;

public:
	Trust_Account(std::string name, int balance, double int_rate);

	void deposit(int amount);

	void withdraw(int amount);
};

#endif // !_INHERITANCE_H_