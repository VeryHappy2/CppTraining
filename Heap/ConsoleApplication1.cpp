// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

void Initialize(int[], int);
void Show(int[], int);

int main()
{
    //vars
    int* varNew = new int;

    std::cout << varNew << std::endl;
    std::cout << *varNew << std::endl;

    *varNew = 10;

    std::cout << *varNew << std::endl;

    int* varNew2 = new int(2);

    std::cout << "varNew2 = " << varNew2 << std::endl;
    std::cout << "*varNew2 = " << *varNew << std::endl;

    double** varNew3 = new double*;

    std::cout << "varNew3 = " << varNew3 << std::endl;
    std::cout << "*varNew3 = " << *varNew3 << std::endl;
    double* a = new double(4);
    varNew3 = &a;

    std::cout << "**varNew3 = " << **varNew3 << std::endl;
    delete varNew; // it deletes data but NOT POINTER

    varNew = new int(2); // We can see that we can use pointer after deleting data
    std::cout << "*varNew change = " << *varNew << std::endl;

    // array
    srand(static_cast<unsigned int>(time(nullptr)));

    int SIZE = 3;
    int* array = new int[3];

    Initialize(array, SIZE);
    Show(array, SIZE);
    delete[] array; // it deletes data from array, ALL DATA

    std::cout << "Enter the size of an array:" << std::endl;
    int size;
    std::cin >> size;

    int* arrEnter = new int[size];
    Initialize(arrEnter, size);
    Show(arrEnter, size);

    return 0;
}

void Initialize(int arr[], int size)
{
    if (arr == nullptr)
        return;

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand();
    }
}

void Show(int arr[], int size)
{
    if (arr == nullptr)
        return;

    for (int i = 0; i < size; i++)
    {
        std::cout << i << " = " << arr[i] << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other
//   4. Use the Error List window to view
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
