#include<iostream>

int main() 
{
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

    return 0;
}