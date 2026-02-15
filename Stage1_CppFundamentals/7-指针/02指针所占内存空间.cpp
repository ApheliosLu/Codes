#include <iostream>

int main02() {
	// 所有指针类型在64位操作系统下是8个字节

	int a = 10;
	int* p = &a;
	std::cout << "*p = " << *p << std::endl;
	std::cout << sizeof(p) << std::endl;
	std::cout << sizeof(char*) << std::endl;
	std::cout << sizeof(float*) << std::endl;
	std::cout << sizeof(double*) << std::endl;

	return 0;
}