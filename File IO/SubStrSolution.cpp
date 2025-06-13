#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

void subStrSolve() {
	std::fstream file{ "./romeo.txt", std::ios::in };
	//std::fstream file1{ "./try.txt", std::ios::in };
	std::string input, line;
	int count = 0;

	std::cout << "Enter the sub string: ";
	std::cin >> input;

	while (file >> line) {
		size_t pos = line.find(input);
		if (pos != std::string::npos) {
			count++;
		}
	}

	std::cout << count << std::endl;
	file.close();
	//file1.close();
}