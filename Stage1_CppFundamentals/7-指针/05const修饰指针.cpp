#include <iostream>

int main05() {
	/*
	const修饰指针有三种情况
		1. const修饰指针，常量指针
		2. const修饰常量，指针常量
		3. const即修饰指针，又修饰常量
	*/

	int a = 10, b = 20;

	// 常量指针，指针指向可以修改，指针指向的值不能修改
	const int* p1 = &a;	// const 修饰 int*
	p1 = &b;
	//*p1 = 100;

	// 指针常量，指针指向不能修改，指针指向的值可以修改
	int* const p2 = &a;	// const 修饰 p2
	//p2 = &b;
	*p2 = 200;

	// const既修饰指针又修饰常量
	const int* const p3 = &a;
	//p3 = &b;
	//*p3 = 100;

	return 0;
}