// BubleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void BubbleSort(int*, int);
void Swap(int*, int*);

int main()
{
    int arr[3] = { 1, 5, 2 };

    BubbleSort(arr, 3);

    for (int i = 0; i < 3; i++)
        std::cout << arr[i] << " " << std::endl;

    std::cout << sizeof(int);

    return 0;
}

void BubbleSort(int* array, int size)
{
    if (array == nullptr)
    {
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (array[j] < array[j - 1])
            {
                Swap(&array[j], &array[j - 1]);
            }
        }
    }
}

void Swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
