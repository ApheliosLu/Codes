#include<iostream>

int* func(int b) {	// 形参数据b也会存放在栈区
	b = 100;
	int a = 10;	// 局部变量		存放在栈区，栈区数据在函数执行完后自动释放
	return &a;	// 返回局部变量的地址×		非法操作
}
int main02() {
	// 接受func函数的返回值
	int* p = func(20);
	std::cout << *p << std::endl;	// 第一次可以打印正确数字，因为编译器做了保留
	std::cout << *p << std::endl;	// 之后不再保留
	return 0;
}