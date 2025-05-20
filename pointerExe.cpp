#include <cstddef>
#include <iostream>
#include <iterator>

using namespace std;

void print(const int *const array, size_t size) {
  for (size_t i = 0; i < size; i++) {
    cout << *(array + i) << " ";
  }
  cout << '\n';
}

int *applyAll(int *array1, size_t size1, int *array2, size_t size2) {
  size_t new_size{size1 * size2};
  int *new_array = new int[new_size];
  int count{0};

  for (size_t i = 0; i < size1; i++) {
    for (size_t j = 0; j < size2; j++) {
      *(new_array + count) = *(array1 + i) * *(array2 + j);
      count++;
    }
  }
  return new_array;
}

int main(int argc, char *argv[]) {
  int array1[]{1, 2, 3, 4, 5};
  int array2[]{6, 7, 8, 9, 10};

  print(array1, 5);
  print(array2, 5);

  int *array{nullptr};

  array = applyAll(array1, 5, array2, 5);

  print(array, 25);

  delete[] array;
  return 0;
}
