#include "iostream"
#include "string"

using namespace std;

int main(int argc, char const *argv[])
{
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << i << endl;
    // }
    // int i = 0;
    // while (i < 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // i = 0;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i < 10);

    string myStr = "Hello world";

    // we can also use auto instead of char
    for (char c : myStr)
    {
        cout << c;
    }
    cout << "\n";

    //! jump statements
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;
        if (i == 7)
            break;
        cout << i << " ";
    }
    cout << "\n";

    int i = 10;
myLabel:
    cout << i << " ";
    i--;
    if (i > 0)
        goto myLabel;

    int number;
    cout << "\nChoose a number: ";
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "The number is one";
        break;
    case 2:
        cout << "The number is two";
        break;
    default:
        cout << "Invalid input";
    }
    return 0;
}