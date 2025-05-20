#include "iostream"

using namespace std;

// function prototype
void odd(int);
void even(int);

int factorial(int);

int main(int argc, char const *argv[])
{
    odd(2);
    even(3);

    // recursion
    cout << factorial(8) << endl;

    return 0;
}

void odd(int a)
{
    if (a % 2 != 0)
        cout << "Odd" << endl;
    else
        even(a);
}

void even(int a)
{
    if (a % 2 == 0)
        cout << "Even" << endl;
    else
        odd(a);
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    return 1;
}
