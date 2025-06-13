#ifndef _INSUFFICIENTFUNDSEXCEPTION_H_
#define _INSUFFICIENTFUNDSEXCEPTION_H_

#include <iostream>

class InsufficientFundsException : public std::exception{
public:
	InsufficientFundsException() = default;

	virtual const char* what() noexcept {
		return "Insufficient balance in your account.";
	}

	~InsufficientFundsException() = default;
};

#endif // !_INSUFFICIENTFUNDSEXCEPTION_H_
