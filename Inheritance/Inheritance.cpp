#include <iostream>
#include <vector>
#include "Header.h"
#include "Accounts_Utils.h"

int main()
{
	Trust_Account t1("Ramesh", 10000, 0.5);
	t1.deposit(10000);

	std::cout << t1;

	return 0;
}

