// Refernces.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

static void Swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	// type_data& nameRef = value <- It is only l-value!
	// type_data&& nameRef = value <- It is only r-value!
	int var = 10;
	int& reference = var;

	std::cout << "var = " << &var << std::endl;
	std::cout << "ref1 = " << reference << std::endl;
	std::cout << "&ref1 change = " << &reference << std::endl;

	reference = 4;

	std::cout << "ref1 change = " << reference << std::endl;
	std::cout << "&ref1 change = " << &reference << std::endl;

	const int constant = 5;
	const int& ref2 = constant;

	std::cout << "constant = " << &constant << std::endl;
	std::cout << "ref2 = " << ref2 << std::endl;

	const int& refConst = 10; // It works but int& ref = 10, it doesn't work!
	std::cout << "refConst = " << refConst << std::endl;

	int&& ref3 = 4;
	ref3 = 500;
	std::cout << "ref3 = " << ref3 << std::endl;

	int var2 = 5;
	int* ptr = &var2;

	int*& refPtr = ptr;

	std::cout << "&ptr = " << &ptr << std::endl;
	std::cout << "&var2 = " << &var2 << std::endl;

	std::cout << "refPtr = " << refPtr << std::endl; // Adress of the var2
	std::cout << "refPtr = " << &refPtr << std::endl; // Address of the ptr

	//array
	int arr[5] = { 1, 2, 3, 4, 5 };

	int(&arrayRef)[5] = arr;

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "i = " << arrayRef[i] << std::endl;
	}

	int num1 = 10;
	int num2 = 5;

	Swap(num1, num2);
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num2 << std::endl;

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
