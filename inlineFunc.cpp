#include "iostream"

using namespace std;

inline void sum(int a, int b)
{
    cout << a + b << endl;
}

int main(int argc, char const *argv[])
{
    sum(5, 7);
    return 0;
}