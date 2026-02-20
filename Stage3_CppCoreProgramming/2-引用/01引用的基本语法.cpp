#include<iostream>

int main01() {
	int a = 10;
	int& b = a;	// 起别名
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	b = 100;
	std::cout << "a = " << a << std::endl;	// 同时修改
	std::cout << "b = " << b << std::endl;

	return 0;
}