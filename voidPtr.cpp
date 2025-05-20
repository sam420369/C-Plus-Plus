#include "iostream"

using namespace std;

void increase(void *data, int ptrSize) {
  if (ptrSize == sizeof(int)) {
    int *pint;
    pint = (int *)data;
    ++*pint;
  } else if (ptrSize == sizeof(char)) {
    char *pchar;
    pchar = (char *)data;
    ++*pchar;
  }
}

int main() {
  int x = 3;
  char y = 'a';
  increase(&x, sizeof(x));
  increase(&y, sizeof(y));
  cout << x << endl;
  cout << y << endl;
  return 0;
}
