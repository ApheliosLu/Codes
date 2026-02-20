#include<iostream>

// 1、不要返回局部变量引用
int& test01() {	// 返回一个别名、引用
	int a = 10;	// 局部变量 存于栈区
	return a;
}

// 2、函数调用作左值
int& test02() {
	static int a = 10;	// 静态变量 存于全局区 数据在程序结束后释放
	return a;
}

int main04() {

	//int& ref = test01();
	//std::cout << "ref = " << ref << std::endl;	// 第一次结果正确，因为编译器做了保留
	//std::cout << "ref = " << ref << std::endl;	// 第二次结果错误，因为a的内存已经释放

	int& ref = test02();	// ref是a的别名
	std::cout << "ref = " << ref << std::endl;
	std::cout << "ref = " << ref << std::endl;	// 两次结果都会正确

	// 如果函数的返回值是引用，那么这个函数调用可以作为左值
	test02() = 1000;	// 函数调用作左值 相当于a=1000
	std::cout << "ref = " << ref << std::endl;
	std::cout << "ref = " << ref << std::endl;

	return 0;
}