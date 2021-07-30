#include <iostream>
#include <array>

using namespace std;

void printArray(auto a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << i << ": " << a[i] << endl;
}

void setArray(auto* a, unsigned int position, int value)
{
    a[position] = value;
}

int main()
{
    const int arraySize = 3;
    int array[arraySize];

    array[0] = 5;
    *(array + 1) = 6;
    setArray(array, 2, 7);

    printArray(array, arraySize);
    cout << array << endl;

    cout << endl;


    const int stringSize = 4;
    char string[stringSize];

    string[0] = 'D';
    *(string + 1) = 'a';
    setArray(string, 2, 'r');
    string[3] = 0;

    printArray(string, stringSize);
    cout << string << endl;
}
