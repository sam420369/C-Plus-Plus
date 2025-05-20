#include <array>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *const argv[]) {
  string alphabets{"abcdefghijklmnopqrstuvwxyz "};
  string reverseAlphabets{" zyxwvutsrqponmlkjihgfedcba"};
  string userText{};
  cout << "Enter a text you want to encrypt: ";
  getline(cin, userText);

  // use the range based for loop (:)wala use .find() method to find the pos of
  // char and swap with reverseaplh to encrypt and reverse it to decrypt
  int userTextPos{0};
  int position{0};
  for (auto item : userText) {
    position = alphabets.find(item);
    userText.at(userTextPos) = reverseAlphabets.at(position);
    userTextPos++;
  }
  cout << "Encrypted text: " << userText << endl;

  position = 0;
  userTextPos = 0;
  for (auto item : userText) {
    position = reverseAlphabets.find(item);
    userText.at(userTextPos) = alphabets.at(position);
    userTextPos++;
  }

  cout << "Decrypted text: " << userText << endl;

  return 0;
}
