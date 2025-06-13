#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include "StudentChallenge.h"

struct student {
	std::string name;
	int score = 0;
};

void studentSolve() {
	std::fstream file{ "./text.txt", std::ios::in };
	double avg = 0.0;
	int sum = 0;
	std::vector<student> students;
	std::string answerKey, stdName, stdAnswer;

	if (!file) {
		std::cerr << "File couldn't be opened" << std::endl;
		return;
	}

	file >> answerKey;

	while (file >> stdName >> stdAnswer) {
		student temp;
		int i = 0;
		temp.name = stdName;
		for (auto c : stdAnswer) {
			if (c == answerKey[i]) {
				temp.score++;
			}
			i++;
		}
		sum += temp.score;
		students.push_back(temp);
	}

	std::cout << "Student" << std::setw(20) << std::right << "Score" << std::endl;
	std::cout << std::setw(27) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

	for (auto& std : students) {
		std::cout << std::left << std::setw(25) << std.name << std::right << std.score << std::endl;
	}

	std::cout << std::setw(27) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

	std::cout << "Average" << std::setw(20) << std::right << static_cast<double>(sum) / students.size() << std::endl;
	file.close();
}