#include "iostream"

using namespace std;

namespace myNameSpace
{
    double x = 10.01;
    double y = 121.212;
    int value()
    {
        return 5;
    }
}

namespace otherNameSpace
{
    double pi = 3.1415;
    int x = 1;
    int y = 121;
    string value()
    {
        return "Hello world";
    }
}

int apple;
int main(int argc, char const *argv[])
{
    int mango;
    // using myNameSpace::x;
    // using otherNameSpace::y;

    // cout << x << endl;
    // cout << y << endl;

    cout << myNameSpace::value() << endl;
    cout << otherNameSpace::value() << endl;
    cout << otherNameSpace::pi << endl;

    {
        using namespace myNameSpace;
        cout << x << '\n';
    }
    {
        using namespace otherNameSpace;
        cout << x << '\n';
    }

    /*- Variables with static storage (such as global variables) that are not explicitly initialized are automatically initialized to zeroes.
    - Variables with automatic storage (such as local variables) that are not explicitly initialized are left uninitialized, and thus have an undetermined value.*/

    cout << apple << endl;
    cout << mango << endl;
    return 0;
}