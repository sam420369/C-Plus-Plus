#ifndef _ILLEGALAMOUNTEXCEPTION_H_
#define _ILLEGALAMOUNTEXCEPTION_H_

#include <iostream>

class IllegalAmountException : public std::exception {
public:
	IllegalAmountException() = default;

	virtual const char* what() noexcept {
		return "Amount cannot be negative.";
	}

	~IllegalAmountException() = default;
};

#endif // !_ILLEGALAMOUNTEXCEPTION_H_
