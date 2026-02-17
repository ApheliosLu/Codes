#include<iostream>

int* func03() {
	// 利用new关键字，将数据开辟到堆区
	// 指针本质也是局部变量、放在栈上，指针保存的数据放在堆区
	int* a = new int(100);
	return a;
}

int main03() {
	// 在堆区开辟数据
	int* p = func03();
	std::cout << *p << std::endl;	//  解引用
	std::cout << *p << std::endl;
	std::cout << *p << std::endl;
	std::cout << *p << std::endl;

	return 0;
}