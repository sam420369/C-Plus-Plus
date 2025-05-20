#include <cctype>
#include <cstring>
#include <iostream>
#include <ratio>
#include <string>

using namespace std;

int main(int argc, char *const argv[]) {
  // char a = 'b';
  // cout << isupper(a) << endl;
  // a = toupper(a);
  // cout << isupper(a) << endl;

  // char firstName[20]{};
  // char lastName[20]{};
  // char fullName[40]{};
  //
  // cout << "Enter your first name: ";
  // cin >> firstName;
  //
  // cout << "Enter your last name: ";
  // cin >> lastName;
  //
  // strcat(firstName, " ");
  // strcat(firstName, lastName);
  // strcat(fullName, firstName);
  // cout << "Your full name is " << fullName <<" with a length of
  // "<<strlen(fullName)<<" characters."<< endl;

  string s; // empty string but no garbage value
  string s1{"sakshyam"};
  string s2{s1};       // sakshyam
  string s3{s1, 3};    // shyam
  string s4{s1, 0, 5}; // saksh
  string s5{5, 'P'};   // PPPPP

  cout << s << endl
       << s1 << endl
       << s2 << endl
       << s3 << endl
       << s4 << endl
       << s5 << endl
       << s1.at(5) << endl;

  string text{"This a test text."};
  string extract{};

  extract = text.substr(0, 3);

  cout << extract << endl;
  cout << text.find("text") << endl;

  cout << text.erase(0, 4) << endl; // removes char from 0 to 5
  text.clear();                     // empties text string
  cout << text.length() << endl;

  string otherName{"sam"};

  otherName += s1;
  cout << otherName << endl;

  string example{}; // write hello world when inputting future me
  // cin >> example;
  // cout << example << endl;
  // we can see that when we input hello world only hello will get printed not
  // world this is because cin will stop at any point where it encounters a null
  // character aka space aka \0

  //to store every word the user types we use getline fucntion
  cout<<"Enter hello world again: ";
  getline(cin,example);

  cout<<example<<endl;

  return 0;
}
