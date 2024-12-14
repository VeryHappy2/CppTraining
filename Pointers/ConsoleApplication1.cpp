// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    const int constant = 5;
    unsigned int bigInt = 100;
    int number = 5;
    int* pointer = &number;

    std::cout << bigInt << std::endl;
    const int* constantP = &constant;
    std::cout << "&num = " << &number << std::endl;
    std::cout << "pointer = " << pointer << std::endl;

    std::cout << "*pointer = " << *pointer << std::endl;

    *pointer = 100;
    std::cout << "num change = " << number << std::endl;
    std::cout << "*p change = " << *pointer << std::endl;

    std::cout << "*constantP = " << *constantP << std::endl;
    std::cout << "&constant = " << &constant << std::endl;
    std::cout << "constantP = " << constantP << std::endl;

    int** p2 = &pointer;
    
    std::cout << "*p2 = " << **p2 << std::endl;
    std::cout << "**p2 = " << **p2 << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: clang --version

//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
