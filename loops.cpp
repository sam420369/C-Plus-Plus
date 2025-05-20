#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(vector<int> nums) {
  for (auto item : nums) {
    cout << item << " ";
  }
  cout << '\n';
}

char user_input() {
  char input{};
  cout << "Enter:\nP to print the numbers\nA to append a number\nD to remove a "
          "number\nQ to quit the program"
       << endl;
  cin >> input;
  return tolower(input);
}

void append(vector<int> &nums) {
  int num{};
  cout << "Enter number you want to append: ";
  cin >> num;
  nums.push_back(num);
  display(nums);
}

void remove(vector<int> &nums) {
  int rmNum{};
  display(nums);
  cout << "Enter the number you want to remove: ";
  cin >> rmNum;
  auto index = find(nums.begin(), nums.end(), rmNum);
  nums.erase(index);
  display(nums);
}

int main() {
  vector<int> numbers{1, 2, 3, 4, 5};
  char selection{};
  do {
    selection = user_input();
    switch (selection) {
    case 'p':
      display(numbers);
      break;
    case 'a':
      append(numbers);
      break;
    case 'd':
      remove(numbers);
    }
  } while (selection != 'q');

  return 0;
}
