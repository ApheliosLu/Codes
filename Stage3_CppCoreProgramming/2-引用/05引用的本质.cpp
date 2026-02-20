#include<iostream>

// 引用的本质在c++内部实现是一个指针常量.
void func(int& ref) {	// 引用传递
	ref = 100;	// ref是引用，转换为*ref = 100
}

int main05() {
	int a = 100;

	// 自动转化为int* const ref = &a; 指针常量指针指向不可改变，也说明为什么引用不可修改；指针指向的值可以修改
	int& ref = a;
	ref = 20;	//内部发现ref是引用，自动帮我们转换为: *ref = 20;

	std::cout << "a:" << a << std::endl;
	std::cout << "ref:" << ref << std::endl;

	func(a);
	std::cout << "a:" << a << std::endl;
	std::cout << "ref:" << ref << std::endl;

	return 0;
	// 结论：C++推荐用引用技术，因为语法方便，引用本质是指针常量，但是所有的指针操作编译器都帮我们做了
}