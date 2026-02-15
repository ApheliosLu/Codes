#include "swap.h"

//函数分文件编写一般有4个步骤
//1. 创建后缀名为.h的头文件
//2. 创建后缀名为.cpp的源文件
//3. 在头文件中写函数的声明
//4. 在源文件中写函数的定义

int main() {
	int a = 100, b = 200;
	std::cout << "交换前a = " << a << std::endl;
	std::cout << "交换前b = " << b << std::endl;
	swap(a, b);
}