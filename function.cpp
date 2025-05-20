#include "iostream"

using namespace std;

int add(int x, int y)
{
    return x + y;
}

void greet()
{
    cout << "Hello, world!";
}

void doubler(int &a, int &b)
{
    a *= 2;
    b *= 2;
}

// inline is a suggestion to the compiler whether to make a regular function call or just put the code inside the function in the main. note that it is just a suggestion and the compiler decides whether to put it or not. Generally we use it for small but recurring functions
inline void sum(int a, int b)
{
    cout << a + b << endl;
}

inline void divide(int a, int b = 2)
{
    cout << a / b << endl;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // passing arguments in function by value
    int result = add(a, b);
    cout << "The sum of " << a << " and " << b << " is " << result << endl;

    // void function
    greet();

    // passing arguments in function by reference
    doubler(a, b);
    cout << "a: " << a << " b: " << b;

    // note passing arguments by reference is actually more memory friendly than by value as during passing arguments by value it has to create a new copy of the argument and that may take more space if the provided data is large (mostly in cases of string)

    sum(5, 6);

    // here in both function calls 20 is getting divided but in one case 20 will be divided by 2 as defined in the function that the second parameter to be 2 but in the second case the 2nd parameter will be changed to 4
    divide(20);
    divide(20, 4);
    return 0;
}