#include <iostream>

int main01() {
	int a = 10;

	// 1、定义指针
	int* p;
	p = &a;
	std::cout <<"a = " << a << std::endl;
	std::cout <<"&a = "<< & a << std::endl;		// 引用&
	std::cout << "p = "<<p << std::endl;

	// 2、使用指针
	std::cout << "*p = " << *p << std::endl;	// 解引用*

	return 0;
}