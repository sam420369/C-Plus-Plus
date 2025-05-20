#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  // 5 is the size of the vector vowel
  vector<char> vowels(5);

  vector<int> temp{100, 200, 300, 231};

  // we are now declaring a vector of size of 5 that sets all of its value to 39
  vector<double> highTemp(5, 39);
  // int i = 1;
  // for (double tem : highTemp) {
  //  cout << i << " ";
  // cout << tem << endl;
  // i++;
  //}

  for (int i = 0; i < highTemp.size(); i++) {
    // cout<<temp[i]<<endl;
    cout << highTemp.at(i) << endl;
  }

  highTemp.at(0) = 100;
  cout << highTemp.at(0) << endl;

  vector<char> word{'a', 'b', 'c'};
  word.push_back('d');
  cout << word.at(word.size() - 1) << endl;

  // 2-dimensional vectors
  vector<vector<int>> reviews{{1, 2, 3}, {4, 5, 6}, {7, 8, 9, 10, 11}};

  for (int i = 0; i < reviews.size(); i++) {
    for (int j = 0; j < reviews.at(i).size(); j++) {
      // btw can also use array syntax instead of double at
      cout << "Reviewer " << i + 1 << " gives movie " << j + 1
           << " a rating of: " << reviews.at(i).at(j) << endl;
    }
  }

  vector<int> vector1, vector2;
  vector1.push_back(10);
  vector1.push_back(20);

  cout << vector1.at(0) << vector1.at(1) << sizeof(vector1.size()) << endl;

  vector2.push_back(100);
  vector2.push_back(200);

  cout << vector2.at(0) << vector2.at(1) << sizeof(vector2.size()) << endl;

  vector<vector<int>> vector2D;
  vector2D.push_back(vector1);
  vector2D.push_back(vector2);

  cout << vector2D.at(0).at(0) << vector2D.at(0).at(1) << endl;

  cout << vector2D.at(1).at(0) << vector2D.at(1).at(1) << endl;

  vector1.at(0) = 1000;

  cout << vector2D.at(0).at(0) << vector2D.at(0).at(1) << endl;

  cout << vector2D.at(1).at(0) << vector2D.at(1).at(1) << endl;

  cout << vector1.at(0) << vector1.at(1) << sizeof(vector1.size()) << endl;

  return 0;
}
