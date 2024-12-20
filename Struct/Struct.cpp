// Struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Point
{
    int x;
    double y;
};

struct Profile 
{
    char a;
    int w;
    double d;
};

struct Array 
{
    int* arr = nullptr;
    int size = 0;
};

Array CopyArray(const Array& arr);

int main()
{
    std::cout << sizeof(Point) << std::endl;
    std::cout << sizeof(Profile) << std::endl;

    Array arr;
    std::cout << "Enter a size of the array" << std::endl;
    std::cin >> arr.size;

    arr.arr = new int[arr.size];

    for (size_t i = 0; i < arr.size; i++)
    {
        arr.arr[i] = i + 1;
        std::cout << arr.arr[i] << std::endl;
    }
    
    Array arr2 = CopyArray(arr);
    delete[] arr.arr;

    for (size_t i = 0; i < arr2.size; i++)
    {
        arr2.arr[i] = i + 1;
        std::cout << arr2.arr[i] << std::endl;
    }

    Array* ptr = &arr2;
    std::cout << (*ptr).size << std::endl;
    //or
    std::cout << ptr->size << std::endl;

    Array& ref = arr2;
    std::cout << ref.size << std::endl;

    return 0;
}

Array CopyArray(const Array& arr)
{
    Array arr2;
    if (arr.arr != nullptr) {
        arr2.size = arr.size;
        arr2.arr = new int[arr2.size];
        for (size_t i = 0; i < arr.size; i++)
        {
            arr2.arr[i] = arr.arr[i];
        }
    }

    return arr2;
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
