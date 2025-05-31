#include <iostream>
#include <cctype>
#include "Header.h"

MyString::MyString() : str(nullptr) {
	str = new char[1];
	str[0] = '\0';
}

MyString::MyString(const char* string) {
	str = new char[strlen(string) + 1];
	strcpy(str, string);
}

MyString::MyString(const MyString& source) : str(nullptr) {
	str = new char[strlen(source.str) + 1];
	strcpy(str, source.str);
}

MyString::MyString(MyString&& source)noexcept : str(source.str) {
	source.str = nullptr;
}

MyString::~MyString() {
	delete[] str;
}

void MyString::display() const {
	std::cout << str << std::endl;
}

size_t MyString::get_length() {
	return strlen(str);
}

const char* MyString::get_str() {
	return str;
}

MyString& MyString::operator=(const MyString& rhs) {
	if (this == &rhs) {
		return *this;
	}

	delete[] str;
	str = new char[strlen(rhs.str) + 1];
	strcpy(str, rhs.str);
	return *this;
}

MyString& MyString::operator=(MyString&& rhs)noexcept {
	if (this == &rhs) {
		return *this;
	}

	delete[] str;
	str = rhs.str;

	rhs.str = nullptr;

	return *this;
}

//bool MyString::operator==(const MyString& rhs)const {
//	return (strcmp(str, rhs.str) == 0);
//}

//MyString MyString::operator-()const {
//	char* buff = new char[strlen(str) + 1];
//	strcpy(buff, str);
//
//	for (int i = 0; i < strlen(str); i++) {
//		buff[i] = tolower(buff[i]);
//	}
//
//	MyString temp{ buff };
//	delete[] buff;
//	return temp;
//}

//MyString MyString::operator+(const MyString& rhs)const {
//	char* buff = new char[strlen(str) + strlen(rhs.str) + 1];
//
//	strcpy(buff, str);
//	strcat(buff, rhs.str);
//
//	MyString temp{ buff };
//	delete[] buff;
//	return temp;
//}

bool MyString::operator!=(const MyString& obj) const {
	return (!(strcmp(this->str, obj.str) == 0));
}

bool MyString::operator<(const MyString& obj) const {
	return (strcmp(this->str, obj.str) < 0);
}

bool MyString::operator>(const MyString& obj) const {
	return (strcmp(this->str, obj.str) > 0);
}

MyString& MyString::operator+=(const MyString& rhs) {
	size_t size = strlen(this->str) + strlen(rhs.str) + 1;
	char* buff = new char[size];
	strcpy(buff, this->str);
	strcat(buff, rhs.str);

	delete[] str;
	str = buff;
	return *this;
}

MyString MyString::operator*(const int n) const {
	size_t size = n * strlen(this->str) + 1;
	char* buff = new char[size];

	strcpy(buff, this->str);

	for (int i = 1; i < n; i++) {
		strcat(buff, this->str);
	}
	MyString temp{ buff };
	delete[] buff;
	return temp;
}

MyString& MyString::operator*=(const int n) {
	size_t size = n * strlen(this->str) + 1;
	char* buff = new char[size];

	strcpy(buff, this->str);

	for (int i = 1; i < n; i++) {
		strcat(buff, this->str);
	}

	delete[] str;
	str = buff;
	return *this;
}

MyString& MyString::operator++() {
	char* buff = new char[strlen(this->str) + 1];
	strcpy(buff, this->str);

	for (int i = 0; i < strlen(buff); i++) {
		buff[i] = toupper(buff[i]);
	}

	delete[] this->str;
	this->str = buff;
	return *this;
}

MyString MyString::operator++(int) {
	MyString temp{ *this };
	operator++();
	return temp;
}

bool operator==(const MyString& lhs, const MyString& rhs) {
	return (strcmp(lhs.str, rhs.str) == 0);
}

MyString operator-(const MyString& obj) {
	char* buff = new char[strlen(obj.str) + 1];
	strcpy(buff, obj.str);

	for (int i = 0; i < strlen(buff); i++) {
		buff[i] = tolower(buff[i]);
	}

	MyString temp{ buff };
	delete[] buff;
	return temp;
}

MyString operator+(const MyString& lhs, const MyString& rhs) {
	char* buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];

	strcpy(buff, lhs.str);
	strcat(buff, rhs.str);

	MyString temp{ buff };
	delete[] buff;
	return temp;
}

std::ostream& operator<<(std::ostream& os, const MyString& obj) {
	os << obj.str;
	return os;
}

std::istream& operator>>(std::istream& is, MyString& obj) {
	char* buff = new char[1000];
	is >> buff;

	obj = MyString{ buff };
	delete[] buff;
	return is;
}
