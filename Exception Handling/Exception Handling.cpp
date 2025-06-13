#include <iostream>
#include "Account.h"

//class DivideByZeroException {};
//
//class NegativeValueException{};
//
//double avg(int sum, int total) {
//	if (total == 0)
//		throw DivideByZeroException();
//	if (sum < 0 || total < 0)
//		throw NegativeValueException();
//	return static_cast<double>(sum) / total;
//}

int main()
{
	Account a1;

	try {
		a1.deposit(100);
		a1.withdraw(200);	
	}
	catch (IllegalAmountException& obj) {
		std::cout << obj.what() << std::endl;
	}
	catch (InsufficientFundsException& obj) {
		std::cout << obj.what() << std::endl;
	}
	return 0;
}	