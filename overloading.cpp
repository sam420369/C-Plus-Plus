#include "iostream"

using namespace std;

// int Divide(int a, int b)
// {
//     return a / b;
// }

// double Divide(double a, double b)
// {
//     return a / b;
// }

// we can replace anything with type, past me wrote it so it we be easy as a datatype will soon replace that type
template <class type>
type Divide(type a, type b)
{
    // here whatever the type of "type" becomes the typeof hello will be same in this case it can be both int and double
    type hello;
    return a / b;
}

template <class a, class b>
bool isEqual(a x, b y)
{
    return (x == y);
}

template <class t, int n>
t multiply(t x)
{
    return x * n;
}

int main(int argc, char const *argv[])
{
    int a = 3, b = 2;
    double x = 3, y = 2;
    // the int and double inside <> replaces the type and the respective functions are created so no need to do janky thing like creating more functions. one can do just fine
    cout << Divide<int>(a, b) << endl;
    cout << Divide<double>(x, y) << endl;
    cout << Divide<double>(1, 2) << endl;

    // in this case it has multiple template parameters and works as intended
    cout << isEqual(10, 10.0) << endl;
    // OR
    cout << isEqual<int, double>(10, 10.0) << endl;

    // template with one value fixed
    cout << multiply<int, 2>(2);
    return 0;
}