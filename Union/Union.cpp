// Union.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// union has only one value but struct contains infinity

union MyUnion
{
    char a;
    int b;
};

int main()
{
    std::cout << sizeof(MyUnion) << std::endl;

    MyUnion myUnion;
    myUnion.a = 'A';
    std::cout << "a = " << myUnion.a << std::endl; // A

    myUnion.b = 54;

    std::cout << "a = " << myUnion.a << std::endl; // we can see that we got 6 BUT NOT AN ERROR because we have some bits and this read like '6'
    std::cout << "b = " << myUnion.b << std::endl; // 54

    return 0;
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
