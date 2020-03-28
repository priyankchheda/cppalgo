#include <iostream>

void leftRotateByOne(int array[], int size);

int main()
{
    int n, d;
    std::cin >> n >> d;

    int array[n];
    for (int i = 0; i < n; i++)
        std::cin >> array[i];

    for (; d > 0; d--)
        leftRotateByOne(array, n);

    for (int i = 0; i < n; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
    return 0;
}

void leftRotateByOne(int array[], int size)
{
    int temp = array[0];
    int i;
    for (i = 0; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[i] = temp;
}