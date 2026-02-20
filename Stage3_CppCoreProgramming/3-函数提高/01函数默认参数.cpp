#include<iostream>

// 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
int func(int a, int b = 20,int c = 30) {
	return a + b + c;
}

// 如果函数声明有默认值，函数实现的时候就不能有默认参数
// 即声明和实现只能有一个有默认参数
int func2(int a = 100, int b = 10, int c = 1);
int func2(int a, int b, int c) {
	return a + b - c;
}

int main01() {
	std::cout << func(10,30) << std::endl;	// 10传给a，30传给b
	std::cout << func2() << std::endl;

	return 0;
}