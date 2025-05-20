#include <iostream>
#include <array>

using namespace std;

void printArray(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << endl;
    }
}

void print2dArray(int num[][3][2])
{
    cout << "If 2d array is being passed and empty [] should be left as the pointer to the array is being given to the function and not the array";
}

int main(int argc, char const *argv[])
{
    // both are valid because cpp
    int numbers[5] = {1, 2, 3, 4, 5};
    array<int, 3> digits{10, 20, 30};

    int length = sizeof(numbers) / sizeof(numbers[0]);
    printArray(numbers, length);

    int twoDArray[3][2] = {1,
                           2,
                           {3, 4}};

    // the size() func can only be used to arrays made using array library as done above
    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i] << endl;
    }

    for (int elem : digits)
    {
        cout << elem << endl;
    }
    return 0;
}
