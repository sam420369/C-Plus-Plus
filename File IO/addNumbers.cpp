#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include "addNumbers.h"

void addNumbers() {
	std::ifstream input{ "./romeo.txt" };
	std::ofstream output{ "./romeoOut.txt" };

	std::string line;
	int i = 1;

	/*while (std::getline(input, line)) {
		bool isEmpty = true;
		for (auto c : line) {
			if (c != ' ') {
				isEmpty = false;
				break;
			}
		}
		if (!isEmpty) {
			output << i << std::setw(5) << "" << line << "\n";
			++i;
		}
		else {
			output << "\n";
		}
	}*/

	while (std::getline(input, line)) {
		if (line == "") {
			output << std::endl;
		}
		else {
			output << i << std::setw(5) << "" << line << "\n";
			++i;
		}
	}
}