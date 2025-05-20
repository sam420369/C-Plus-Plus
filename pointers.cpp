#include <iostream>

using namespace std;

int main() {
  // int *ptr{nullptr};
  // ptr = new int; // allocates memory of 1 int size(4 bytes) to ptr
  //
  // cout << ptr << endl;  // address of ptr
  // cout << *ptr << endl; // value at ptr usually garbage
  //
  // *ptr = 100;
  // cout << *ptr << endl;
  // delete ptr;//deletes allocated memory on the heap of the pointer

  // int size{};
  // cout << "Enter the size of the array: ";
  // cin >> size;
  //
  // int *ptr{nullptr};
  // ptr = new int[size];
  //
  // delete [] ptr;

  // int arr[]{1, 2, 3, 4, 5};
  // int *ptr = arr;
  //
  // cout << *(++ptr) << endl;
  // cout << *(arr + 1) << endl;

  // constant pointers and pointer constant
  int highScore{100};
  int avgScore{45};

  // const int *ptr{&highScore};
  // *ptr=200;//error as ptr is constant i.e the value it is pointing to is
  // constant
  // ptr=&avgScore;// no error as the address is not affected in this case

  int *const ptr{&highScore};

  // *ptr= 200;//just read the above comment
  // ptr=&highScore;

  // const int *const ptr {&highScore};

  // cannot change address and the value it is pointing to
  return 0;
}
