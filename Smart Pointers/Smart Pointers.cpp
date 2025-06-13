#include <iostream>
#include <memory>

//class B;
//
//class A {
//private:
//	std::shared_ptr<B> ptr;
//public:
//	A() {
//		std::cout << "A constructor" << std::endl;
//	}
//	
//	void set_B(std::shared_ptr<B>& b) {
//		ptr = b;
//	}	
//
//	~A() {
//		std::cout << "A destructor" << std::endl;
//	}
//
//};
//
//class B {
//private:
//	std::weak_ptr<A> ptr;
//	
//public:
//	B() {
//		std::cout << "B constructor" << std::endl;
//	}
//	
//	void set_A(std::shared_ptr<A>& p) {
//		ptr = p;
//	}
//
//	~B() {
//		std::cout << "B destructor" << std::endl;
//	}
//
//};
//
//void del(A* a) {
//	delete a;
//}
//
//int main()
//{
//	std::shared_ptr<A> a1 { new A, del};
//	std::shared_ptr<B> b1 = std::make_shared<B>();
//
//	a1->set_B(b1);
//	b1->set_A(a1);
//
//	return 0;
//}