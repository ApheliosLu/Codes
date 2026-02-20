#include<iostream>

int main02() {
	int a = 10;
	int b = 20;
	//int& c;	// ×引用必须初始化
	int& c = a;	// 引用初始化后不可更改
	c = b;	// 修改了赋值，不是更改引用；相当于c=20

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;	// 均是20

	return 0;
}