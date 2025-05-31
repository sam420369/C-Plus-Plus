#ifndef _OPERATOR_OVERLOADING_
#define _OPERATOR_OVERLOADING_

#include <iostream>
#include <cstring>

class MyString {
private:
	char* str;

public:
	MyString();

	MyString(const char* string);

	MyString(const MyString& source);

	MyString(MyString&& source)noexcept;

	MyString& operator=(const MyString& rhs);

	MyString& operator=(MyString&& rhs)noexcept;

	//bool operator==(const MyString& rhs)const;

	//MyString operator+(const MyString& rhs)const;

	//MyString operator-()const;

	bool operator!=(const MyString& obj) const;

	bool operator<(const MyString& obj) const;

	bool operator>(const MyString& obj) const;

	MyString& operator+=(const MyString& rhs);

	MyString operator*(int n) const;

	MyString& operator*=(const int n);

	MyString& operator++();

	MyString operator++(int);

	~MyString();

	void display() const;

	size_t get_length();

	const char* get_str();

	friend bool operator==(const MyString& lhs, const MyString& rhs);

	friend MyString operator-(const MyString& obj);

	friend MyString operator+(const MyString& lhs, const MyString& rhs);

	friend std::ostream& operator<<(std::ostream& os, const MyString& obj);

	friend std::istream& operator>>(std::istream& is, MyString& obj);
};

#endif // !_OPERATOR_OVERLOADING_

