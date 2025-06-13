#include <iostream>
#include <vector>
#include <memory>

class Test {
private:
	int data;
public:
	Test() : data(0) {}

	Test(int data) : data(data) {
		std::cout << "\tData added" << std::endl;
	}

	int get_data() const {
		return data;
	}

	void set_data(int num) {
		data = num;
	}

	~Test() = default;
};

static std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
	return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

static void fill(std::vector<std::shared_ptr<Test>>& vec, int num) {
	for (int i = 0; i < num; i++) {
		int x;
		std::cout << "Enter data: ";
		std::cin >> x;
		vec.push_back(std::make_shared<Test>(x));
	}
}

static void display(const std::vector<std::shared_ptr<Test>>& vec) {
	for (auto& v : vec) {
		std::cout << v->get_data() << std::endl;
	}
}

int main() {
	std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec;
	vec = make();
	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num;
	fill(*vec, num);
	display(*vec);
	return 0;
}