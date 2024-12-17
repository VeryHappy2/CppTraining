#include<iostream>

int Func()
{
    return 1;
}

void Func2()
{
    std::cout << "Func2" << std::endl;
}

void Func4()
{
    std::cout << "Func4" << std::endl;
}

double Func3(double var)
{
    return var;
}

void ChangeVar(int* num)
{
    *num = 2;
}

void ChangeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}

void Swap(int* var1, int* var2) {
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

size_t CountLength(const char* string) {
    size_t length = 0;

    while (*string++ != '\0')
        length++;

    return length;
}

int main()
{
// variables
    int value = 42;
    int* pointer = &value;
    int** p2 = &pointer;

    std::cout << "value = " << value << std::endl;
    std::cout << "&value = " << &value << std::endl;

    std::cout << "pointer = " << pointer << std::endl;
    std::cout << "&pointer = " << &pointer << std::endl;
    std::cout << "*pointer = " << *pointer << std::endl;

    std::cout << "**p2 = " << **p2 << std::endl;
    std::cout << "*p2 = " << *p2 << std:: endl;

    *pointer = 10;

    std::cout << "value change = " << value << std::endl;
    std::cout << "*pointer change = " << *pointer << std::endl;
    ChangeVar(&value);
    std::cout << "Changed variable = " << value << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    int a = 5;
    int b = 10;

    Swap(&a, &b);
    std::cout << "a = " << a << std::endl; // the vars were swapped
    std::cout << "b = " << b << std::endl;
// arrays
    int array[5] = { 10, 20, 30 };
    int* pArray = &array[0];
    int* pArray1 = &array[2];

    double array2[5] = { 10.2, 20.1, 30.2 };
    double* pArray2 = &array2[0];
    double* pArray3 = &array2[2];

    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;

    std::cout << &array[0] << std::endl;
    std::cout << &array[1] << std::endl;

    std::cout << array << std::endl;

    std::cout << "pArray0 = " << pArray << std::endl;
    std::cout << "pArray1 = " << pArray + 1 << std::endl;
    std::cout << "pArray2 = " << pArray + 2 << std::endl;

    std::cout << "*pArray0 = " << *pArray + 2<< std::endl;
    std::cout << "*pArray1 = " << *pArray + 1 << std::endl;
    std::cout << "*pArray2 = " << *pArray + 2 << std::endl;

    std::cout << "pArray2 - pArray = " << pArray1 - pArray << std::endl;
    std::cout << "pArray3 - pArray2 = " << pArray3 - pArray2 << std::endl;

    std::cout << "pArray0 = " << pArray[0] << std::endl;
    std::cout << "pArray1 = " << pArray[1] << std::endl;
    std::cout << "pArray2 = " << pArray[2] << std::endl;

    std::cout << "pArray0 = " << &pArray[0] << std::endl;
    std::cout << "pArray1 = " << &pArray[1] << std::endl;
    std::cout << "pArray2 = " << &pArray[2] << std::endl;

    std::cout << std::endl;

    ChangeArray(array, 5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << " = " << array[i];
        std::cout << std::endl;
    }

    std::cout << std::endl;
    const int SIZE = 5;
    int arr[SIZE] = { 10, 20, 30 };
    int* ptr = arr;


// calling by index
    for (int i = 0; i < SIZE; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++)
        std::cout << ptr[i] << " ";
    std::cout << std::endl;
// calling by dereferencing
    for (int i = 0; i < SIZE; i++)
        std::cout << *(arr + i) << " ";
    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++)
        std::cout << *(ptr + i) << " ";
    std::cout << std::endl;
// Adresses by index
    for (int i = 0; i < SIZE; i++)
        std::cout << &arr[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++)
        std::cout << &ptr[i] << " ";
    std::cout << std::endl;

// Array pointers
    int varA, varB, varC;
    varA = 1;
    varB = 2;
    varC = 3;
    int* arrayPointer[3] = { &varA, &varB, &varC };
    for (int i = 0; i < 3; i++)
    {
        std::cout << "adress" << " " << i << " = " << arrayPointer[i] << " ";
        std::cout << "data" << " " << i << " = " << " " << *arrayPointer[i] << std::endl;
    }

    void (*ptrFuncs[2])() = { Func2, Func4 };

    for (int i = 0; i < 2; i++)
    {
        ptrFuncs[i]();
    }
// array in array
    int arrArr[2][3] = { 0 };
    int(*ptrArrArr)[3] = arrArr;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            std::cout << j << " and " << i << " = " << ptrArrArr[i][j] << std::endl; // They are the same
            std::cout << j << " and " << i << " = " << *(*(ptrArrArr + i) + j) << std::endl;
        }
    }
// Calling to elements

    for (int i = 0; i < SIZE; i++)
        std::cout << arr + i << " ";
    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++)
        std::cout << ptr + i << " ";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
// functions
    std::cout << Func << std::endl;
    void (*funcPoint)() = Func2;
    int (*returnFunc)() = Func;
    double (*doublePoint)(double) = Func3;

    funcPoint();
    std::cout << returnFunc() << std::endl;
    doublePoint(1.2);
    std::cout << std::endl;
    std::cout << std::endl;
// consts
    int var = 10;
    const int varConst = 10;
    const int* const constP1Const = &varConst;
    const int* constP2 = &var;
    std::cout << "constP2 = " << *constP2 << std::endl;
    constP2 = &varConst;
    std::cout << "constP2 change = " << *constP2 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
// void
    void* varVoid;

    int integer = 5;
    varVoid = &integer;
    std::cout << "&integer = " << integer << std::endl;
    std::cout << "&varVoid = " << &varVoid << std::endl;
    std::cout << "varVoid = " << *(static_cast<int*>(varVoid)) << std::endl;
// literals
    const char arrayChar[] = "Chars are here";
    const char* ptr2 = "Pointer is here";

    std::cout << &"Hello World with &" << std::endl; // adress is the same
    std::cout << &"Hello World with &" << std::endl;

    std::cout << CountLength(ptr2) << std::endl;
    std::cout << CountLength(arrayChar) << std::endl;
    return 0;
}

