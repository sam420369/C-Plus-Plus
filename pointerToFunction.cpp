#include <cstddef>
#include <iostream>

using namespace std;

int *largest(int *a, int *b) {
  if (*a > *b) {
    return a;
  } else
    return b;
}

int *createArray(size_t size, int init_value = 0) {
  int *newArray = new int[size];

  for (size_t i = 0; i < size; i++) {
    *(newArray + i) = init_value;
  }

  return newArray;
}

int main() {
  int x = 10, y = 20;
  cout << &x << endl << &y << endl;
  cout << *largest(&x, &y) << endl;

  int *array{nullptr};

  array = createArray(5, 10);
  for (int i = 0; i < 5; i++) {
    cout << *(array + i) << endl;
  }
  delete[] array;
  return 0;
}
