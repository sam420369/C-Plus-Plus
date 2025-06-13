#include <iostream>
#include <vector>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Accounts_Utils.h"
#include "I_Printable.h"

int main() {
	Account* p1 = new Checking_Account("A", 1000);
	Account* p2 = new Savings_Account("B", 2000, 0.5);
	Account* p3 = new Trust_Account("C", 3000, 0.5);

	std::vector<Account*> Accounts = { p1, p2, p3 };
	
	display(Accounts);
	deposit(Accounts, 100);
	display(Accounts);
	withdraw(Accounts, 100);
	display(Accounts);

	delete p1, p2, p3;

	return 0;
}