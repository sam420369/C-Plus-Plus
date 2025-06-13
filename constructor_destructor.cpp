#include <iostream>

class Base {
private:
	int value;

public:
	Base() : value(0) {
		std::cout << "Base no args constructor called.\n";
	}

	Base(int x) : value(x) {
		std::cout << "Base args constructor called.\n";
	}

	Base(const Base& other) : value(other.value) {
		std::cout << "Base copy constructor called" << std::endl;
	}

	Base(Base&& other) noexcept {
		value = other.value;
		other.value = 0;
		std::cout << "Base move constructor called" << std::endl;
	}

	Base& operator=(const Base& rhs) {
		if (this == &rhs) {
			return *this;
		}
		this->value = rhs.value;
		return *this;
	}

	void display() {
		std::cout << "The value stored is " << this->value << std::endl;
	}

	~Base() {
		std::cout << "Base destructor called.\n";
	}

};

class Derived : public Base {
private:
	int double_value;

public:
	Derived() : Base{}, double_value(0) {
		std::cout << "Derived no args constructor called\n";
	}

	Derived(int x) : Base{ x }, double_value(2 * x) {
		std::cout << "Derived args constructor called\n";
	}

	Derived(const Derived& obj) : Base(obj), double_value(obj.double_value) {
		std::cout << "Derived copy constructor called" << std::endl;
	}

	Derived(Derived&& obj) noexcept: Base(obj)  {
		double_value = obj.double_value;
		obj.double_value = 0;
		std::cout << "Derived move constructor called" << std::endl;
	}

	Derived& operator=(const Derived& rhs) {
		if (this == &rhs) {
			return *this;
		}

		Base::operator=(rhs);
		this->double_value = rhs.double_value;
		return *this;
	}

	void display() {
		std::cout << "The value stored is " << this->double_value << std::endl;
	}

	~Derived() {
		std::cout << "Derived destructor called\n";
	}
};

int main() {
	Base b1, b2(1);
	Derived d1, d2(1);
	Derived d3;
	d3 = d2;
	d3.display();
	return 0;
}