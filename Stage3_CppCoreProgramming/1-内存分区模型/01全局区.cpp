#include<iostream>

// 全局区：全局变量、静态变量、常量		"地址临近"

// 全局变量
int g_a = 10;
int g_b = 10;

// const修饰的全局变量:全局常量
const int c_g_a = 10;

int main01() {

	// 局部变量和局部常量存放在栈区
	// 普通局部变量
	int a = 10;
	int b = 10;
	std::cout << "局部变量a的地址为：" << (int)&a << std::endl;
	std::cout << "局部变量b的地址为：" << (int)&b << std::endl;

	std::cout << "全局变量a的地址为：" << (int)&g_a << std::endl;
	std::cout << "全局变量b的地址为：" << (int)&g_b << std::endl;

	// 静态变量 在普通变量前加static，成为静态变量
	static int s_a = 10;
	static int s_b = 10;
	std::cout << "静态变量a的地址为：" << (int)&s_a << std::endl;
	std::cout << "静态变量b的地址为：" << (int)&s_b << std::endl;

	// 常量：字符串常量、const修饰的变量
	std::cout << "字符串常量的地址为：" << (int)&"hello world" << std::endl;

	std::cout << "全局常量a的地址为：" << (int)&c_g_a << std::endl;

	// const修饰的局部变量：局部常量
	const int c_l_a = 10;
	std::cout << "局部常量a的地址为：" << (int)&c_l_a << std::endl;

	return 0;
}